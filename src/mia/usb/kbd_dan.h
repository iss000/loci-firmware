/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _KBD_DAN_H_
#define _KBD_DAN_H_

// Danish / Dansk

// KEYCODE to Unicode Conversion
// {without shift, with shift, with altGr, with shift and altGr}

#define HID_KEYCODE_TO_UNICODE_DA         HID_KEYCODE_TO_UNICODE_DA_DK_QWERTY
#define HID_KEYCODE_TO_UNICODE_DA_QWERTY  HID_KEYCODE_TO_UNICODE_DA_DK_QWERTY
#define HID_KEYCODE_TO_UNICODE_DA_DK      HID_KEYCODE_TO_UNICODE_DA_DK_QWERTY

#define HID_KEYCODE_TO_UNICODE_DA_DK_QWERTY			  \
		/* 0x00:    0 */ {     0,      0,      0, 0}, \
		/* 0x01:    0 */ {     0,      0,      0, 0}, \
		/* 0x02:    0 */ {     0,      0,      0, 0}, \
		/* 0x03:    0 */ {     0,      0,      0, 0}, \
		/* 0x04:    a */ {   'a',    'A',      0, 0}, \
		/* 0x05:    b */ {   'b',    'B',      0, 0}, \
		/* 0x06:    c */ {   'c',    'C',      0, 0}, \
		/* 0x07:    d */ {   'd',    'D',      0, 0}, \
		/* 0x08:    e */ {   'e',    'E', 0x20ac, 0}, \
		/* 0x09:    f */ {   'f',    'F',      0, 0}, \
		/* 0x0a:    g */ {   'g',    'G',      0, 0}, \
		/* 0x0b:    h */ {   'h',    'H',      0, 0}, \
		/* 0x0c:    i */ {   'i',    'I',      0, 0}, \
		/* 0x0d:    j */ {   'j',    'J',      0, 0}, \
		/* 0x0e:    k */ {   'k',    'K',      0, 0}, \
		/* 0x0f:    l */ {   'l',    'L',      0, 0}, \
		/* 0x10:    m */ {   'm',    'M', 0x00b5, 0}, \
		/* 0x11:    n */ {   'n',    'N',      0, 0}, \
		/* 0x12:    o */ {   'o',    'O',      0, 0}, \
		/* 0x13:    p */ {   'p',    'P',      0, 0}, \
		/* 0x14:    q */ {   'q',    'Q',      0, 0}, \
		/* 0x15:    r */ {   'r',    'R',      0, 0}, \
		/* 0x16:    s */ {   's',    'S',      0, 0}, \
		/* 0x17:    t */ {   't',    'T',      0, 0}, \
		/* 0x18:    u */ {   'u',    'U',      0, 0}, \
		/* 0x19:    v */ {   'v',    'V',      0, 0}, \
		/* 0x1a:    w */ {   'w',    'W',      0, 0}, \
		/* 0x1b:    x */ {   'x',    'X',      0, 0}, \
		/* 0x1c:    y */ {   'y',    'Y',      0, 0}, \
		/* 0x1d:    z */ {   'z',    'Z',      0, 0}, \
		/* 0x1e:    1 */ {   '1',    '!',      0, 0}, \
		/* 0x1f:    2 */ {   '2',    '"', 0x0040, 0}, \
		/* 0x20:    3 */ {   '3',    '#', 0x00a3, 0}, \
		/* 0x21:    4 */ {   '4', 0x00a4,    '$', 0}, \
		/* 0x22:    5 */ {   '5',    '%', 0x20ac, 0}, \
		/* 0x23:    6 */ {   '6',    '&',      0, 0}, \
		/* 0x24:    7 */ {   '7',    '/',    '{', 0}, \
		/* 0x25:    8 */ {   '8',    '(',    '[', 0}, \
		/* 0x26:    9 */ {   '9',    ')',    ']', 0}, \
		/* 0x27:    0 */ {   '0',    '=',    '}', 0}, \
		/* 0x28:   \r */ {  '\r',   '\r',      0, 0}, \
		/* 0x29: \x1b */ {'\x1b', '\x1b',      0, 0}, \
		/* 0x2a: \x7f */ {'\x7f', '\x7f',      0, 0}, \
		/* 0x2b:   \t */ {  '\t',   '\t',      0, 0}, \
		/* 0x2c:      */ {   ' ',    ' ',      0, 0}, \
		/* 0x2d:    + */ {   '+',    '?',      0, 0}, \
		/* 0x2e:    ´ */ {0x00b4, 0x0060,    '|', 0}, \
		/* 0x2f:    å */ {0x00e5, 0x00c5,      0, 0}, \
		/* 0x30:    ¨ */ {0x00a8,    '^',    '~', 0}, \
		/* 0x31:    ' */ {  '\'',    '*',      0, 0}, \
		/* 0x32:    ' */ {  '\'',    '*',      0, 0}, \
		/* 0x33:    æ */ {0x00e6, 0x00c6,      0, 0}, \
		/* 0x34:    ø */ {0x00f8, 0x00d8,      0, 0}, \
		/* 0x35:    ½ */ {0x00bd, 0x00a7,      0, 0}, \
		/* 0x36:    , */ {   ',',    ';',      0, 0}, \
		/* 0x37:    . */ {   '.',    ':',      0, 0}, \
		/* 0x38:    - */ {   '-',    '_',      0, 0}, \
		/* 0x39:    0 */ {     0,      0,      0, 0}, \
		/* 0x3a:    0 */ {     0,      0,      0, 0}, \
		/* 0x3b:    0 */ {     0,      0,      0, 0}, \
		/* 0x3c:    0 */ {     0,      0,      0, 0}, \
		/* 0x3d:    0 */ {     0,      0,      0, 0}, \
		/* 0x3e:    0 */ {     0,      0,      0, 0}, \
		/* 0x3f:    0 */ {     0,      0,      0, 0}, \
		/* 0x40:    0 */ {     0,      0,      0, 0}, \
		/* 0x41:    0 */ {     0,      0,      0, 0}, \
		/* 0x42:    0 */ {     0,      0,      0, 0}, \
		/* 0x43:    0 */ {     0,      0,      0, 0}, \
		/* 0x44:    0 */ {     0,      0,      0, 0}, \
		/* 0x45:    0 */ {     0,      0,      0, 0}, \
		/* 0x46:    0 */ {     0,      0,      0, 0}, \
		/* 0x47:    0 */ {     0,      0,      0, 0}, \
		/* 0x48:    0 */ {     0,      0,      0, 0}, \
		/* 0x49:    0 */ {     0,      0,      0, 0}, \
		/* 0x4a:    0 */ {     0,      0,      0, 0}, \
		/* 0x4b:    0 */ {     0,      0,      0, 0}, \
		/* 0x4c:    0 */ {     0,      0,      0, 0}, \
		/* 0x4d:    0 */ {     0,      0,      0, 0}, \
		/* 0x4e:    0 */ {     0,      0,      0, 0}, \
		/* 0x4f:    0 */ {     0,      0,      0, 0}, \
		/* 0x50:    0 */ {     0,      0,      0, 0}, \
		/* 0x51:    0 */ {     0,      0,      0, 0}, \
		/* 0x52:    0 */ {     0,      0,      0, 0}, \
		/* 0x53:    0 */ {     0,      0,      0, 0}, \
		/* 0x54:    0 */ {     0,      0,      0, 0}, \
		/* 0x55:    * */ {   '*',    '*',      0, 0}, \
		/* 0x56:    - */ {   '-',    '-',      0, 0}, \
		/* 0x57:    + */ {   '+',    '+',      0, 0}, \
		/* 0x58:   \r */ {  '\r',   '\r',      0, 0}, \
		/* 0x59:    1 */ {   '1',      0,      0, 0}, \
		/* 0x5a:    2 */ {   '2',      0,      0, 0}, \
		/* 0x5b:    3 */ {   '3',      0,      0, 0}, \
		/* 0x5c:    4 */ {   '4',      0,      0, 0}, \
		/* 0x5d:    5 */ {   '5',      0,      0, 0}, \
		/* 0x5e:    6 */ {   '6',      0,      0, 0}, \
		/* 0x5f:    7 */ {   '7',      0,      0, 0}, \
		/* 0x60:    8 */ {   '8',      0,      0, 0}, \
		/* 0x61:    9 */ {   '9',      0,      0, 0}, \
		/* 0x62:    0 */ {   '0',      0,      0, 0}, \
		/* 0x63:    , */ {   ',',      0,      0, 0}, \
		/* 0x64:    < */ {   '<',    '>',   '\\', 0},

#endif /* _KBD_DAN_H_ */
