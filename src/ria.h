/*
 * Copyright (c) 2022 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RIA_H_
#define _RIA_H_

#include <stdint.h>

// 64KB Virtual RAM
#ifdef NDEBUG
extern uint8_t vram[0xFFFF];
#else
extern uint8_t *const vram;
#endif

void ria_init();
void ria_task();
void ria_set_phi2_mhz(int mhz);

#endif /* _RIA_H_ */
