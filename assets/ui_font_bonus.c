/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font C:/Users/TUOC PC/SquareLine/assets/DS-DIGI.TTF -o C:/Users/TUOC PC/SquareLine/assets\ui_font_bonus.c --format lvgl -r 0x20-0xff --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_BONUS
#define UI_FONT_BONUS 1
#endif

#if UI_FONT_BONUS

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x7f, 0xf4, 0xff, 0xd3, 0xc0,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x0, 0x3, 0x60, 0x6c, 0xd, 0x8f, 0xfe, 0x36,
    0x6, 0xc0, 0xd8, 0xff, 0xe3, 0x60, 0x6c, 0xd,
    0x80, 0x0,

    /* U+0024 "$" */
    0xc, 0x3, 0x0, 0xc1, 0xff, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x7, 0xf8, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xff, 0xe0, 0xc0,
    0x30, 0xc, 0x0,

    /* U+0025 "%" */
    0x78, 0x6c, 0xc4, 0xcc, 0xcc, 0xd8, 0xcd, 0x87,
    0x90, 0x0, 0x0, 0x20, 0xc, 0x0, 0xce, 0x19,
    0x31, 0x93, 0x31, 0x32, 0x13, 0x20, 0xe0,

    /* U+0026 "&" */
    0x7f, 0x30, 0xc, 0x3, 0x0, 0xc1, 0xb0, 0x6c,
    0x19, 0xfd, 0xc1, 0xb0, 0x6c, 0x1b, 0x6, 0xc1,
    0xb0, 0x67, 0xf0,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7e, 0x31, 0x8c, 0x63, 0x0, 0xc6, 0x31, 0x8c,
    0x61, 0xe0,

    /* U+0029 ")" */
    0xf0, 0xc6, 0x31, 0x8c, 0x60, 0x18, 0xc6, 0x31,
    0x8f, 0xc0,

    /* U+002A "*" */
    0x18, 0x5a, 0x7e, 0x3c, 0x66, 0xfb, 0x18, 0x0,

    /* U+002B "+" */
    0x0, 0x18, 0x18, 0xff, 0x18, 0x18, 0x0,

    /* U+002C "," */
    0xff,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x1, 0x81, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x20,
    0x20, 0x30, 0x18, 0x18, 0x18, 0xc, 0x4, 0x2,
    0x0,

    /* U+0030 "0" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfe,

    /* U+0031 "1" */
    0x3f, 0xfc, 0xff, 0xf0,

    /* U+0032 "2" */
    0x7f, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0xfc,

    /* U+0033 "3" */
    0x7f, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x7,
    0xfe, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xd,
    0xfe,

    /* U+0034 "4" */
    0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd, 0xfc,
    0x3, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x8,

    /* U+0035 "5" */
    0xff, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x0,
    0xfe, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xd,
    0xfe,

    /* U+0036 "6" */
    0xff, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x0,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfe,

    /* U+0037 "7" */
    0x7f, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,
    0x1, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x4,

    /* U+0038 "8" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfe,

    /* U+0039 "9" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xd,
    0xfe,

    /* U+003A ":" */
    0xc0, 0x0, 0x3,

    /* U+003B ";" */
    0xc0, 0x0, 0xf, 0xf0,

    /* U+003C "<" */
    0xc, 0x73, 0x9c, 0xe3, 0x87, 0xe, 0x1c, 0x30,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0xc3, 0x87, 0xe, 0x1c, 0x73, 0x9c, 0xe3, 0x0,

    /* U+003F "?" */
    0x7f, 0x0, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x4, 0x0,
    0x1, 0x80, 0xc0, 0x0,

    /* U+0040 "@" */
    0x7f, 0xf8, 0xf, 0x1, 0xe0, 0x3d, 0xfd, 0xe0,
    0xec, 0x19, 0x83, 0xb0, 0x7e, 0xf, 0xc1, 0xef,
    0xfc, 0x1, 0x80, 0x1f, 0xf8,

    /* U+0041 "A" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd, 0xfd,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18, 0x0,

    /* U+0042 "B" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfc,

    /* U+0043 "C" */
    0x7f, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x7, 0xf8,

    /* U+0044 "D" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfc,

    /* U+0045 "E" */
    0xff, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x1, 0xfe, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xf, 0xf8,

    /* U+0046 "F" */
    0xff, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0x7,
    0xfb, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0x80,
    0x0,

    /* U+0047 "G" */
    0x7f, 0x60, 0x30, 0x18, 0xc, 0x6, 0x0, 0x1d,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1b, 0xf8,
    0xf8,

    /* U+0048 "H" */
    0x0, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xc,
    0x0,

    /* U+0049 "I" */
    0xff, 0xfc, 0xff, 0xfc,

    /* U+004A "J" */
    0x0, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x2,
    0x0, 0x1, 0x80, 0xf0, 0x78, 0x3c, 0x1f, 0xfc,

    /* U+004B "K" */
    0x83, 0x63, 0xb1, 0x99, 0x8d, 0x87, 0x83, 0x80,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xc,
    0x0,

    /* U+004C "L" */
    0x80, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0x8,
    0x0, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x3f, 0xe0,

    /* U+004D "M" */
    0xff, 0xf0, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x30,
    0x2, 0x1, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xe0, 0x10,

    /* U+004E "N" */
    0x0, 0x40, 0x7c, 0x7b, 0x3c, 0xde, 0x3f, 0xe,
    0x1, 0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe,
    0x2,

    /* U+004F "O" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd,
    0xfc,

    /* U+0050 "P" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xd, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc0, 0xe0, 0xf0, 0x78, 0x3c, 0x3e, 0x19,
    0xf6,

    /* U+0052 "R" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xd0, 0x6c, 0x33, 0x18, 0xcc, 0x76, 0x1e,
    0x6,

    /* U+0053 "S" */
    0x7f, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x0,
    0xfe, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xf,
    0xfc,

    /* U+0054 "T" */
    0x7f, 0x80, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x0, 0x4, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0,

    /* U+0055 "U" */
    0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe, 0x2,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1b, 0xf8,

    /* U+0056 "V" */
    0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe, 0x2,
    0x2, 0xc3, 0x63, 0x33, 0x1b, 0x8d, 0x87, 0x80,
    0x0,

    /* U+0057 "W" */
    0x80, 0x70, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x38,
    0x4, 0x0, 0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xc0,
    0xff, 0xf0,

    /* U+0058 "X" */
    0x80, 0xe0, 0xd0, 0x4c, 0x63, 0x61, 0xb0, 0x50,
    0x0, 0x14, 0x1b, 0xd, 0x8c, 0x64, 0x16, 0xe,
    0x2,

    /* U+0059 "Y" */
    0x80, 0x30, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0xfe, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x33, 0xf8,

    /* U+005A "Z" */
    0x7f, 0x80, 0x40, 0x60, 0x60, 0x30, 0x30, 0x30,
    0x0, 0x10, 0x18, 0x18, 0xc, 0xc, 0x4, 0x3,
    0xfc,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x0, 0xc6, 0x31, 0x8c,
    0x63, 0xe0,

    /* U+005C "\\" */
    0xc0, 0x30, 0x18, 0x6, 0x1, 0x0, 0xc0, 0x20,
    0x8, 0x6, 0x3, 0x0, 0xc0, 0x30, 0x18, 0x4,
    0x2,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x60, 0x18, 0xc6, 0x31,
    0x8f, 0xe0,

    /* U+005E "^" */
    0x18, 0x3c, 0x7e, 0xe7, 0xc3,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0x4d, 0x80,

    /* U+0061 "a" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd, 0xfd,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18, 0x0,

    /* U+0062 "b" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfc,

    /* U+0063 "c" */
    0x7f, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0x7, 0xf8,

    /* U+0064 "d" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf,
    0xfc,

    /* U+0065 "e" */
    0xff, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x1, 0xfe, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xf, 0xf8,

    /* U+0066 "f" */
    0xff, 0xb0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0x7,
    0xfb, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0x80,
    0x0,

    /* U+0067 "g" */
    0x7f, 0x60, 0x30, 0x18, 0xc, 0x6, 0x0, 0x1d,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1b, 0xf8,
    0xf8,

    /* U+0068 "h" */
    0x0, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xc,
    0x0,

    /* U+0069 "i" */
    0xff, 0xfc, 0xff, 0xfc,

    /* U+006A "j" */
    0x0, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x2,
    0x0, 0x1, 0x80, 0xf0, 0x78, 0x3c, 0x1f, 0xfc,

    /* U+006B "k" */
    0x83, 0x63, 0xb1, 0x99, 0x8d, 0x87, 0x83, 0x80,
    0xfe, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xc,
    0x0,

    /* U+006C "l" */
    0x80, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0x8,
    0x0, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x3f, 0xe0,

    /* U+006D "m" */
    0xff, 0xf0, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x30,
    0x2, 0x1, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xe0, 0x10,

    /* U+006E "n" */
    0x0, 0x40, 0x7c, 0x7b, 0x3c, 0xde, 0x3f, 0xe,
    0x1, 0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe,
    0x2,

    /* U+006F "o" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xd,
    0xfc,

    /* U+0070 "p" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xd, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0, 0x0,

    /* U+0071 "q" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0x0, 0xc0, 0xe0, 0xf0, 0x78, 0x3c, 0x3e, 0x19,
    0xf6,

    /* U+0072 "r" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xfe, 0xd0, 0x6c, 0x33, 0x18, 0xcc, 0x76, 0x1e,
    0x6,

    /* U+0073 "s" */
    0x7f, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x0,
    0xfe, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xf,
    0xfc,

    /* U+0074 "t" */
    0x7f, 0x80, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x0, 0x4, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0,

    /* U+0075 "u" */
    0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe, 0x2,
    0x0, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1b, 0xf8,

    /* U+0076 "v" */
    0x80, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xe, 0x2,
    0x2, 0xc3, 0x63, 0x33, 0x1b, 0x8d, 0x87, 0x80,
    0x0,

    /* U+0077 "w" */
    0x80, 0x70, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x38,
    0x4, 0x0, 0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xc0,
    0xff, 0xf0,

    /* U+0078 "x" */
    0x80, 0xe0, 0xd0, 0x4c, 0x63, 0x61, 0xb0, 0x50,
    0x0, 0x14, 0x1b, 0xd, 0x8c, 0x64, 0x16, 0xe,
    0x2,

    /* U+0079 "y" */
    0x80, 0x30, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xd, 0xfe, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x33, 0xf8,

    /* U+007A "z" */
    0x7f, 0x80, 0x40, 0x60, 0x60, 0x30, 0x30, 0x30,
    0x0, 0x10, 0x18, 0x18, 0xc, 0xc, 0x4, 0x3,
    0xfc,

    /* U+007B "{" */
    0x1c, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x70, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0x7, 0x0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0x60, 0x30, 0x60, 0xc1, 0x83, 0x6, 0x7, 0x18,
    0x30, 0x60, 0xc1, 0x83, 0x1c, 0x0,

    /* U+007E "~" */
    0xf1, 0x8f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 91, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 100, .box_w = 2, .box_h = 17, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 6, .adv_w = 107, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 8, .adv_w = 195, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 26, .adv_w = 188, .box_w = 10, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 53, .adv_w = 232, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 68, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 96, .adv_w = 123, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 123, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 124, .adv_w = 159, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 131, .adv_w = 68, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 132, .adv_w = 159, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 133, .adv_w = 68, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 100, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 188, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 221, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 271, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 84, .box_w = 2, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 84, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 312, .adv_w = 138, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 320, .adv_w = 159, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 324, .adv_w = 138, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 332, .adv_w = 188, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 352, .adv_w = 221, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 389, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 478, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 100, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 585, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 635, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 704, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 123, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 123, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 172, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 850, .adv_w = 155, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 851, .adv_w = 87, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 853, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 869, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 958, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 100, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1065, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1099, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1115, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1184, .adv_w = 188, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 188, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1235, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1252, .adv_w = 188, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 188, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 146, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 96, .box_w = 2, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1307, .adv_w = 146, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1321, .adv_w = 172, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_bonus = {
#else
lv_font_t ui_font_bonus = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_BONUS*/
