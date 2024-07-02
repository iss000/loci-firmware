/*
 * Copyright (c) 2024 Sodiumlightbaby
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _MNT_H_
#define _MNT_H_

#include <stdbool.h>

/* Kernel events
 */

void mnt_task(void);
void mnt_stop(void);

/* The API implementation for file mounting support.
 */

void mnt_api_mount(void);
void mnt_api_umount(void);

#endif /* _MNT_H_ */
