/*
 * Copyright (c) 2023 Rumbledethumps
 * Copyrighy (c) 2024 Sodiumlightbaby
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "api/api.h"
#include "api/mnt.h"
#include "oric/dsk.h"
#include "oric/tap.h"
#include "fatfs/ff.h"
#include "sys/lfs.h"
#include <string.h>

//4 drives + 1 tape mountable
#define MNT_FD_MAX 5
FIL mnt_fd_fat[MNT_FD_MAX];
lfs_file_t mnt_fd_lfs[MNT_FD_MAX];

char mnt_paths[MNT_FD_MAX][256];

typedef enum _mnt_status {
    UNMOUNTED = 0,
    MOUNTED,
    LOST
} mnt_status_t;

mnt_status_t mnt_status[MNT_FD_MAX] = { 0 };

/* Kernel events
 */

void mnt_task(void);
void mnt_stop(void);

uint8_t mnt_mount(uint8_t drive, char *path){
   if(drive == 4){ //Tape
        tap_umount();
    }else{
        dsk_umount(drive);
    }
    if(path[0]=='0'){   //LFS mount for path starting"0:"
        //Todo attribute check RO
        lfs_file_opencfg(&lfs_volume, &mnt_fd_lfs[drive], &path[2], LFS_O_RDWR, lfs_alloc_file_config());
        if(drive == 4){
            tap_mount_lfs(&mnt_fd_lfs[4]);
        }else{
            dsk_mount_lfs(drive, &mnt_fd_lfs[drive]);
        }
    }else{              //FAT mount
        FRESULT fresult = f_open(&mnt_fd_fat[drive], path, FA_READ | FA_WRITE);
        if (fresult != FR_OK)
            return API_EFATFS(fresult);
        if(drive == 4){
            tap_mount_fat(&mnt_fd_fat[4]);
        }else{
            dsk_mount_fat(drive, &mnt_fd_fat[drive]);
        }
    }
    mnt_status[drive] = MOUNTED;
    return 0;
}

void mnt_api_mount(void){
    uint8_t drive = API_A;
    char *path = (char*)&xstack[xstack_ptr];
    api_zxstack();
    uint8_t ret;
    ret = mnt_mount(drive,path);
    if(ret > 0)
        api_return_errno(ret);
    strcpy(mnt_paths[drive],path);
    printf("{MNT ok %s}",path);
    return api_return_ax(0);
}

void mnt_api_umount(void){
    uint8_t drive = API_A;
    if(drive == 4){ //Tape
        tap_umount();
    }else{
        dsk_umount(drive);
    }
    if(drive < 5)
        mnt_status[drive] = UNMOUNTED;
    return api_return_ax(0);
}

void mnt_set_lost(uint8_t device){
    for(int i=0; i < MNT_FD_MAX; i++){
        if(mnt_status[i]==MOUNTED && mnt_paths[i][0]==('0'+device)){
            mnt_status[i] = LOST;
        }
    }
}

void mnt_check_lost(uint8_t device){
    for(int i=0; i < MNT_FD_MAX; i++){
        if(mnt_status[i]==LOST && mnt_paths[i][0]==('0'+device)){
            mnt_mount(i,mnt_paths[i]);
        }
    }
}