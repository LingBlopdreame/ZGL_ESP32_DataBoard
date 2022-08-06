/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --bpp 4 --size 16 --font H:\new_Project\ESP_IDF_Project\ZGL_Project\GUI\assets\fonts\seguisb.ttf -o H:\new_Project\ESP_IDF_Project\ZGL_Project\GUI\assets\fonts\ui_font_seguisb16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef UI_FONT_SEGUISB16
#define UI_FONT_SEGUISB16 1
#endif

#if UI_FONT_SEGUISB16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x8f, 0x47, 0xf4, 0x7f, 0x47, 0xf3, 0x6f, 0x36,
    0xf3, 0x5f, 0x23, 0xb1, 0x0, 0x7, 0xf5, 0x7f,
    0x50,

    /* U+0022 "\"" */
    0x9d, 0xd, 0xa9, 0xd0, 0xda, 0x9d, 0xd, 0xa3,
    0x50, 0x54,

    /* U+0023 "#" */
    0x0, 0x8, 0xb0, 0x5e, 0x0, 0x0, 0xb, 0x80,
    0x9a, 0x0, 0x0, 0xf, 0x50, 0xc7, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xf0, 0x1, 0x6e, 0x14, 0xf1,
    0x0, 0x0, 0x9a, 0x7, 0xc0, 0x0, 0x9f, 0xff,
    0xff, 0xff, 0x70, 0x12, 0xf4, 0x2e, 0x72, 0x0,
    0x3, 0xf0, 0x1f, 0x20, 0x0, 0x6, 0xc0, 0x5e,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0xf, 0x0, 0x0, 0x6d, 0xff, 0xd2, 0x6f,
    0xaf, 0x7a, 0x4c, 0xd0, 0xf0, 0x0, 0xce, 0xf,
    0x0, 0x6, 0xfd, 0xf0, 0x0, 0x5, 0xef, 0xd4,
    0x0, 0x0, 0xfd, 0xf5, 0x0, 0xf, 0x1e, 0xe1,
    0x0, 0xf0, 0xbe, 0xcb, 0x7f, 0xaf, 0x86, 0xcf,
    0xfc, 0x60, 0x0, 0xf, 0x0, 0x0, 0x0, 0xe0,
    0x0,

    /* U+0025 "%" */
    0x4, 0xdf, 0xc2, 0x0, 0x9, 0x80, 0x1, 0xf7,
    0x2b, 0xc0, 0x4, 0xd0, 0x0, 0x4f, 0x0, 0x5f,
    0x0, 0xd3, 0x0, 0x2, 0xf4, 0x9, 0xc0, 0x98,
    0x0, 0x0, 0x7, 0xff, 0xd2, 0x3d, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0x47, 0xdd, 0x70, 0x0,
    0x0, 0x8, 0x95, 0xf4, 0x5f, 0x40, 0x0, 0x3,
    0xd0, 0xaa, 0x0, 0xc8, 0x0, 0x0, 0xd4, 0xb,
    0x90, 0xc, 0x70, 0x0, 0x7a, 0x0, 0x7e, 0x12,
    0xf3, 0x0, 0x2e, 0x10, 0x0, 0x9e, 0xd6, 0x0,

    /* U+0026 "&" */
    0x0, 0x8, 0xef, 0xc3, 0x0, 0x0, 0x0, 0x8f,
    0x85, 0xdf, 0x0, 0x0, 0x0, 0xce, 0x0, 0x8f,
    0x10, 0x0, 0x0, 0x8f, 0x43, 0xeb, 0x0, 0x0,
    0x0, 0xe, 0xff, 0x90, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0x30, 0x1f, 0x80, 0xa, 0xf4, 0x2e, 0xf3,
    0x4f, 0x50, 0x1f, 0xa0, 0x3, 0xff, 0xce, 0x0,
    0x1f, 0xc0, 0x0, 0x4f, 0xf6, 0x0, 0xb, 0xfa,
    0x68, 0xdf, 0xfd, 0x10, 0x1, 0x8d, 0xfe, 0x92,
    0x5f, 0xd1,

    /* U+0027 "'" */
    0xac, 0xac, 0xac, 0x45,

    /* U+0028 "(" */
    0x0, 0x7a, 0x0, 0x4f, 0x50, 0xc, 0xc0, 0x3,
    0xf5, 0x0, 0x8f, 0x10, 0xb, 0xe0, 0x0, 0xcc,
    0x0, 0xd, 0xc0, 0x0, 0xbd, 0x0, 0x9, 0xf0,
    0x0, 0x5f, 0x40, 0x0, 0xea, 0x0, 0x7, 0xf2,
    0x0, 0xb, 0xc0,

    /* U+0029 ")" */
    0x7b, 0x0, 0x1, 0xe9, 0x0, 0x7, 0xf2, 0x0,
    0xf, 0x90, 0x0, 0xcd, 0x0, 0x8, 0xf0, 0x0,
    0x7f, 0x20, 0x6, 0xf2, 0x0, 0x8f, 0x10, 0xa,
    0xe0, 0x0, 0xea, 0x0, 0x5f, 0x40, 0xc, 0xc0,
    0x7, 0xf2, 0x0,

    /* U+002A "*" */
    0x0, 0x2f, 0x20, 0x0, 0x51, 0xf1, 0x50, 0x3d,
    0xef, 0xed, 0x30, 0xa, 0xea, 0x0, 0x7, 0xe1,
    0xe7, 0x0, 0x13, 0x4, 0x10,

    /* U+002B "+" */
    0x0, 0x1, 0xf3, 0x0, 0x0, 0x0, 0x1f, 0x30,
    0x0, 0x0, 0x1, 0xf3, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xf4, 0x3, 0x34, 0xf6, 0x33, 0x10, 0x0,
    0x1f, 0x30, 0x0, 0x0, 0x1, 0xf3, 0x0, 0x0,
    0x0, 0x4, 0x10, 0x0,

    /* U+002C "," */
    0xb, 0x92, 0xf7, 0x5f, 0x29, 0xd0,

    /* U+002D "-" */
    0x1, 0x11, 0xe, 0xff, 0xf6, 0x33, 0x33, 0x10,

    /* U+002E "." */
    0x0, 0x0, 0x1e, 0xd0, 0xd, 0xc0,

    /* U+002F "/" */
    0x0, 0x0, 0x1, 0xf9, 0x0, 0x0, 0x8, 0xf2,
    0x0, 0x0, 0xe, 0xb0, 0x0, 0x0, 0x5f, 0x50,
    0x0, 0x0, 0xce, 0x0, 0x0, 0x2, 0xf7, 0x0,
    0x0, 0x9, 0xf1, 0x0, 0x0, 0xf, 0xa0, 0x0,
    0x0, 0x6f, 0x30, 0x0, 0x0, 0xdd, 0x0, 0x0,
    0x4, 0xf6, 0x0, 0x0, 0xa, 0xf0, 0x0, 0x0,
    0x1f, 0x90, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x5d, 0xfd, 0x70, 0x0, 0x5f, 0xc7, 0xcf,
    0x60, 0xe, 0xe0, 0x1, 0xfd, 0x2, 0xfa, 0x0,
    0xb, 0xf1, 0x5f, 0x80, 0x0, 0x9f, 0x36, 0xf7,
    0x0, 0x9, 0xf4, 0x5f, 0x80, 0x0, 0xaf, 0x33,
    0xfa, 0x0, 0xb, 0xf1, 0xf, 0xe0, 0x1, 0xfc,
    0x0, 0x7f, 0xc7, 0xdf, 0x40, 0x0, 0x7e, 0xfc,
    0x40, 0x0,

    /* U+0031 "1" */
    0x0, 0x1a, 0xc2, 0xaf, 0xfd, 0x5d, 0x6f, 0xd0,
    0x0, 0xfd, 0x0, 0xf, 0xd0, 0x0, 0xfd, 0x0,
    0xf, 0xd0, 0x0, 0xfd, 0x0, 0xf, 0xd0, 0x0,
    0xfd, 0x0, 0xf, 0xd0,

    /* U+0032 "2" */
    0x3, 0xbe, 0xfc, 0x50, 0xd, 0xc8, 0x8f, 0xf3,
    0x4, 0x0, 0x6, 0xf8, 0x0, 0x0, 0x4, 0xf8,
    0x0, 0x0, 0xa, 0xf4, 0x0, 0x0, 0x9f, 0xa0,
    0x0, 0x1c, 0xfa, 0x0, 0x1, 0xdf, 0x60, 0x0,
    0xb, 0xf4, 0x0, 0x0, 0x2f, 0xe8, 0x88, 0x86,
    0x3f, 0xff, 0xff, 0xfc,

    /* U+0033 "3" */
    0x4, 0xce, 0xfb, 0x30, 0x9, 0xa7, 0x9f, 0xe1,
    0x0, 0x0, 0x9, 0xf5, 0x0, 0x0, 0x9, 0xf3,
    0x0, 0x12, 0x6f, 0xb0, 0x0, 0xef, 0xfb, 0x10,
    0x0, 0x45, 0x7e, 0xf3, 0x0, 0x0, 0x3, 0xfa,
    0x0, 0x0, 0x4, 0xfa, 0xe, 0x86, 0x9f, 0xf3,
    0x9, 0xef, 0xea, 0x30,

    /* U+0034 "4" */
    0x0, 0x0, 0xd, 0xf3, 0x0, 0x0, 0x6, 0xff,
    0x30, 0x0, 0x2, 0xfe, 0xf3, 0x0, 0x0, 0xcc,
    0x8f, 0x30, 0x0, 0x9f, 0x28, 0xf3, 0x0, 0x6f,
    0x50, 0x8f, 0x30, 0x4f, 0xa2, 0x29, 0xf5, 0x29,
    0xff, 0xff, 0xff, 0xfe, 0x35, 0x55, 0x5a, 0xf7,
    0x40, 0x0, 0x0, 0x8f, 0x30, 0x0, 0x0, 0x8,
    0xf3, 0x0,

    /* U+0035 "5" */
    0x3f, 0xff, 0xff, 0x54, 0xfa, 0x88, 0x82, 0x6f,
    0x30, 0x0, 0x7, 0xf4, 0x10, 0x0, 0x8f, 0xff,
    0xe6, 0x3, 0x55, 0x8f, 0xf5, 0x0, 0x0, 0x4f,
    0xb0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x6f, 0xab,
    0x97, 0xaf, 0xf2, 0x8e, 0xfe, 0xa2, 0x0,

    /* U+0036 "6" */
    0x0, 0x7, 0xdf, 0xe7, 0x0, 0xb, 0xfb, 0x78,
    0x70, 0x6, 0xf8, 0x0, 0x0, 0x0, 0xce, 0x0,
    0x0, 0x0, 0xf, 0xc9, 0xff, 0xc2, 0x2, 0xff,
    0xb5, 0x8f, 0xd0, 0x2f, 0xe0, 0x0, 0xbf, 0x31,
    0xfc, 0x0, 0x8, 0xf4, 0xc, 0xf1, 0x0, 0xcf,
    0x20, 0x4f, 0xd8, 0xbf, 0x90, 0x0, 0x4c, 0xfe,
    0x70, 0x0,

    /* U+0037 "7" */
    0x7f, 0xff, 0xff, 0xff, 0x3, 0x88, 0x88, 0xaf,
    0xb0, 0x0, 0x0, 0xa, 0xf2, 0x0, 0x0, 0x2,
    0xfa, 0x0, 0x0, 0x0, 0xaf, 0x30, 0x0, 0x0,
    0x1f, 0xb0, 0x0, 0x0, 0x8, 0xf5, 0x0, 0x0,
    0x0, 0xdf, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0,
    0x0, 0x7, 0xf7, 0x0, 0x0, 0x0, 0xaf, 0x30,
    0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x8d, 0xfd, 0x70, 0x0, 0x9f, 0xa6, 0xbf,
    0x70, 0xd, 0xe0, 0x0, 0xfb, 0x0, 0x8f, 0x51,
    0x7f, 0x60, 0x0, 0xbf, 0xff, 0x90, 0x0, 0x8f,
    0x94, 0xaf, 0x70, 0x1f, 0xb0, 0x0, 0xcf, 0x4,
    0xf8, 0x0, 0x9, 0xf2, 0x2f, 0xb0, 0x0, 0xdf,
    0x10, 0xaf, 0xa6, 0xbf, 0x80, 0x0, 0x7d, 0xfd,
    0x70, 0x0,

    /* U+0039 "9" */
    0x0, 0x7e, 0xfd, 0x50, 0x0, 0x8f, 0xb8, 0xef,
    0x40, 0x1f, 0xc0, 0x2, 0xfc, 0x4, 0xf8, 0x0,
    0xc, 0xf1, 0x3f, 0xa0, 0x0, 0xdf, 0x20, 0xef,
    0x62, 0x8f, 0xf2, 0x3, 0xef, 0xfd, 0xcf, 0x10,
    0x0, 0x33, 0xd, 0xd0, 0x0, 0x0, 0x6, 0xf7,
    0x0, 0x88, 0x7a, 0xfc, 0x0, 0x8, 0xef, 0xe8,
    0x0, 0x0,

    /* U+003A ":" */
    0xd, 0xc0, 0x1e, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1e, 0xd0, 0xd, 0xc0,

    /* U+003B ";" */
    0xd, 0xc0, 0xe, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xa0, 0x2f, 0x70,
    0x5f, 0x20, 0x9d, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x19, 0xf1,
    0x0, 0x19, 0xfd, 0x50, 0x18, 0xfc, 0x40, 0x0,
    0xef, 0x70, 0x0, 0x0, 0x2a, 0xfc, 0x50, 0x0,
    0x0, 0x29, 0xfd, 0x60, 0x0, 0x0, 0x18, 0xe1,
    0x0, 0x0, 0x0, 0x0,

    /* U+003D "=" */
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xf4, 0x3, 0x33, 0x33, 0x33, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0x40, 0x33,
    0x33, 0x33, 0x31,

    /* U+003E ">" */
    0x20, 0x0, 0x0, 0x0, 0xeb, 0x30, 0x0, 0x0,
    0x3b, 0xfa, 0x20, 0x0, 0x0, 0x3a, 0xfa, 0x20,
    0x0, 0x0, 0x5f, 0xf0, 0x0, 0x4b, 0xfa, 0x30,
    0x6d, 0xf9, 0x20, 0x0, 0xd8, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x19, 0xdf, 0xd6, 0x3, 0xe9, 0x8e, 0xf4, 0x11,
    0x0, 0x5f, 0x70, 0x0, 0x8, 0xf3, 0x0, 0x5,
    0xf8, 0x0, 0x4, 0xf8, 0x0, 0x0, 0xbd, 0x0,
    0x0, 0x9, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xf3, 0x0, 0x0, 0x9e, 0x20, 0x0,

    /* U+0040 "@" */
    0x0, 0x2, 0x9d, 0xff, 0xc7, 0x10, 0x0, 0x0,
    0x6f, 0xa4, 0x12, 0x5c, 0xe3, 0x0, 0x6, 0xf5,
    0x0, 0x0, 0x0, 0x9e, 0x20, 0x1f, 0x70, 0x2c,
    0xfa, 0xc8, 0xd, 0xa0, 0x6f, 0x0, 0xdb, 0x27,
    0xf6, 0x7, 0xf0, 0xab, 0x5, 0xf2, 0x1, 0xf5,
    0x5, 0xf0, 0xca, 0x8, 0xe0, 0x1, 0xf4, 0x5,
    0xf0, 0xba, 0x9, 0xd0, 0x4, 0xf3, 0x8, 0xd0,
    0x9d, 0x5, 0xf3, 0x1b, 0xf6, 0x2e, 0x50, 0x4f,
    0x40, 0xbf, 0xe4, 0xaf, 0xf7, 0x0, 0xb, 0xe1,
    0x1, 0x0, 0x1, 0x0, 0x0, 0x1, 0xce, 0x61,
    0x0, 0x27, 0x0, 0x0, 0x0, 0x7, 0xdf, 0xff,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x1, 0x21, 0x0,
    0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0xdf, 0x90, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0x0, 0x0, 0x0, 0xa, 0xf8, 0xf5, 0x0,
    0x0, 0x0, 0xfc, 0x1f, 0xb0, 0x0, 0x0, 0x6f,
    0x60, 0xcf, 0x20, 0x0, 0xc, 0xf1, 0x6, 0xf8,
    0x0, 0x2, 0xfc, 0x22, 0x3f, 0xe0, 0x0, 0x8f,
    0xff, 0xff, 0xff, 0x40, 0xe, 0xf5, 0x55, 0x58,
    0xfa, 0x4, 0xfb, 0x0, 0x0, 0xf, 0xf0, 0xaf,
    0x50, 0x0, 0x0, 0xaf, 0x60,

    /* U+0042 "B" */
    0x9f, 0xff, 0xeb, 0x30, 0x9f, 0x97, 0xaf, 0xf2,
    0x9f, 0x30, 0x9, 0xf6, 0x9f, 0x30, 0x9, 0xf4,
    0x9f, 0x52, 0x6f, 0xb0, 0x9f, 0xff, 0xfd, 0x40,
    0x9f, 0x75, 0x6d, 0xf7, 0x9f, 0x30, 0x1, 0xfe,
    0x9f, 0x30, 0x2, 0xfe, 0x9f, 0x97, 0x8e, 0xf7,
    0x9f, 0xff, 0xec, 0x50,

    /* U+0043 "C" */
    0x0, 0x4, 0xae, 0xfe, 0xb1, 0x0, 0x8f, 0xfc,
    0x9b, 0xe3, 0x6, 0xfd, 0x20, 0x0, 0x0, 0xe,
    0xf2, 0x0, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x0,
    0x0, 0x4f, 0xa0, 0x0, 0x0, 0x0, 0x4f, 0xb0,
    0x0, 0x0, 0x0, 0x1f, 0xf1, 0x0, 0x0, 0x0,
    0x9, 0xfc, 0x10, 0x0, 0x0, 0x0, 0xcf, 0xfb,
    0x9b, 0xf3, 0x0, 0x7, 0xcf, 0xfd, 0x91,

    /* U+0044 "D" */
    0x9f, 0xff, 0xfd, 0x92, 0x0, 0x9f, 0xa8, 0x9c,
    0xff, 0x60, 0x9f, 0x30, 0x0, 0x4f, 0xf2, 0x9f,
    0x30, 0x0, 0x8, 0xf8, 0x9f, 0x30, 0x0, 0x3,
    0xfb, 0x9f, 0x30, 0x0, 0x2, 0xfc, 0x9f, 0x30,
    0x0, 0x4, 0xfb, 0x9f, 0x30, 0x0, 0x9, 0xf6,
    0x9f, 0x30, 0x0, 0x6f, 0xd0, 0x9f, 0xa8, 0x9d,
    0xfd, 0x20, 0x9f, 0xff, 0xec, 0x60, 0x0,

    /* U+0045 "E" */
    0x9f, 0xff, 0xff, 0x69, 0xfa, 0x88, 0x83, 0x9f,
    0x40, 0x0, 0x9, 0xf4, 0x0, 0x0, 0x9f, 0xa8,
    0x88, 0x9, 0xff, 0xff, 0xf1, 0x9f, 0x40, 0x0,
    0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40, 0x0, 0x9,
    0xfa, 0x88, 0x85, 0x9f, 0xff, 0xff, 0xa0,

    /* U+0046 "F" */
    0x9f, 0xff, 0xff, 0x79, 0xfa, 0x88, 0x83, 0x9f,
    0x40, 0x0, 0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40,
    0x0, 0x9, 0xff, 0xff, 0xf1, 0x9f, 0xa8, 0x88,
    0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40, 0x0, 0x9,
    0xf4, 0x0, 0x0, 0x9f, 0x40, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x3, 0xae, 0xfe, 0xc7, 0x0, 0x8, 0xff,
    0xb9, 0xad, 0xc0, 0x6, 0xfd, 0x20, 0x0, 0x2,
    0x0, 0xef, 0x20, 0x0, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x0, 0x0, 0x4, 0xfa, 0x0, 0x1f, 0xff,
    0xf2, 0x4f, 0xc0, 0x0, 0x88, 0xdf, 0x20, 0xff,
    0x10, 0x0, 0xb, 0xf2, 0x9, 0xfb, 0x0, 0x0,
    0xbf, 0x20, 0xb, 0xfe, 0xa9, 0xbf, 0xf2, 0x0,
    0x6, 0xcf, 0xfd, 0xa4, 0x0,

    /* U+0048 "H" */
    0x9f, 0x40, 0x0, 0x7, 0xf6, 0x9f, 0x40, 0x0,
    0x7, 0xf6, 0x9f, 0x40, 0x0, 0x7, 0xf6, 0x9f,
    0x40, 0x0, 0x7, 0xf6, 0x9f, 0xb9, 0x99, 0x9c,
    0xf6, 0x9f, 0xff, 0xff, 0xff, 0xf6, 0x9f, 0x40,
    0x0, 0x7, 0xf6, 0x9f, 0x40, 0x0, 0x7, 0xf6,
    0x9f, 0x40, 0x0, 0x7, 0xf6, 0x9f, 0x40, 0x0,
    0x7, 0xf6, 0x9f, 0x40, 0x0, 0x7, 0xf6,

    /* U+0049 "I" */
    0xaf, 0x4a, 0xf4, 0xaf, 0x4a, 0xf4, 0xaf, 0x4a,
    0xf4, 0xaf, 0x4a, 0xf4, 0xaf, 0x4a, 0xf4, 0xaf,
    0x40,

    /* U+004A "J" */
    0x0, 0xc, 0xf1, 0x0, 0xc, 0xf1, 0x0, 0xc,
    0xf1, 0x0, 0xc, 0xf1, 0x0, 0xc, 0xf1, 0x0,
    0xc, 0xf1, 0x0, 0xc, 0xf0, 0x0, 0xe, 0xf0,
    0x0, 0x3f, 0xc0, 0x9a, 0xef, 0x50, 0xbf, 0xd6,
    0x0,

    /* U+004B "K" */
    0x9f, 0x40, 0x2, 0xff, 0x29, 0xf4, 0x0, 0xdf,
    0x40, 0x9f, 0x40, 0xaf, 0x70, 0x9, 0xf4, 0x7f,
    0x90, 0x0, 0x9f, 0x7f, 0xc0, 0x0, 0x9, 0xfe,
    0xf5, 0x0, 0x0, 0x9f, 0x5e, 0xf2, 0x0, 0x9,
    0xf4, 0x4f, 0xe1, 0x0, 0x9f, 0x40, 0x7f, 0xc0,
    0x9, 0xf4, 0x0, 0xbf, 0x90, 0x9f, 0x40, 0x1,
    0xef, 0x70,

    /* U+004C "L" */
    0x9f, 0x40, 0x0, 0x9, 0xf4, 0x0, 0x0, 0x9f,
    0x40, 0x0, 0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40,
    0x0, 0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40, 0x0,
    0x9, 0xf4, 0x0, 0x0, 0x9f, 0x40, 0x0, 0x9,
    0xfa, 0x88, 0x85, 0x9f, 0xff, 0xff, 0x90,

    /* U+004D "M" */
    0x9f, 0xf3, 0x0, 0x0, 0x5, 0xff, 0x69, 0xff,
    0x90, 0x0, 0x0, 0xbf, 0xf6, 0x9f, 0xcf, 0x0,
    0x0, 0x2f, 0xcf, 0x69, 0xf7, 0xf6, 0x0, 0x8,
    0xf7, 0xf6, 0x9f, 0x2e, 0xc0, 0x0, 0xea, 0x6f,
    0x69, 0xf1, 0x8f, 0x30, 0x5f, 0x36, 0xf6, 0x9f,
    0x12, 0xf9, 0xc, 0xd0, 0x6f, 0x69, 0xf1, 0xb,
    0xf3, 0xf6, 0x6, 0xf6, 0x9f, 0x10, 0x4f, 0xdf,
    0x0, 0x6f, 0x69, 0xf1, 0x0, 0xef, 0x90, 0x6,
    0xf6, 0x9f, 0x10, 0x7, 0xf3, 0x0, 0x6f, 0x60,

    /* U+004E "N" */
    0x9f, 0xd0, 0x0, 0x0, 0xee, 0x9f, 0xf8, 0x0,
    0x0, 0xee, 0x9f, 0xdf, 0x30, 0x0, 0xee, 0x9f,
    0x5f, 0xd0, 0x0, 0xee, 0x9f, 0x37, 0xf7, 0x0,
    0xee, 0x9f, 0x30, 0xcf, 0x20, 0xee, 0x9f, 0x30,
    0x2f, 0xc0, 0xee, 0x9f, 0x30, 0x7, 0xf7, 0xee,
    0x9f, 0x30, 0x0, 0xcf, 0xee, 0x9f, 0x30, 0x0,
    0x2f, 0xfe, 0x9f, 0x30, 0x0, 0x7, 0xfe,

    /* U+004F "O" */
    0x0, 0x6, 0xcf, 0xfd, 0x80, 0x0, 0x0, 0xbf,
    0xea, 0xad, 0xfd, 0x10, 0x8, 0xfc, 0x0, 0x0,
    0x9f, 0xb0, 0xf, 0xf2, 0x0, 0x0, 0xe, 0xf2,
    0x3f, 0xc0, 0x0, 0x0, 0xa, 0xf5, 0x4f, 0xa0,
    0x0, 0x0, 0x8, 0xf6, 0x4f, 0xc0, 0x0, 0x0,
    0xa, 0xf5, 0xf, 0xf1, 0x0, 0x0, 0xe, 0xf1,
    0x9, 0xfb, 0x0, 0x0, 0x9f, 0xa0, 0x0, 0xcf,
    0xea, 0xae, 0xfc, 0x10, 0x0, 0x7, 0xcf, 0xfd,
    0x70, 0x0,

    /* U+0050 "P" */
    0x9f, 0xff, 0xeb, 0x30, 0x9f, 0x98, 0xaf, 0xf4,
    0x9f, 0x30, 0x6, 0xfb, 0x9f, 0x30, 0x2, 0xfd,
    0x9f, 0x30, 0x4, 0xfb, 0x9f, 0x52, 0x5e, 0xf4,
    0x9f, 0xff, 0xff, 0x60, 0x9f, 0x75, 0x40, 0x0,
    0x9f, 0x30, 0x0, 0x0, 0x9f, 0x30, 0x0, 0x0,
    0x9f, 0x30, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x6, 0xcf, 0xfd, 0x80, 0x0, 0x0, 0xb,
    0xfe, 0xaa, 0xef, 0xd1, 0x0, 0x8, 0xfc, 0x10,
    0x0, 0xaf, 0xb0, 0x0, 0xff, 0x20, 0x0, 0x0,
    0xef, 0x20, 0x3f, 0xc0, 0x0, 0x0, 0xa, 0xf5,
    0x4, 0xfa, 0x0, 0x0, 0x0, 0x8f, 0x60, 0x4f,
    0xc0, 0x0, 0x0, 0xa, 0xf4, 0x0, 0xff, 0x10,
    0x0, 0x0, 0xef, 0x10, 0x9, 0xfb, 0x10, 0x0,
    0xaf, 0x90, 0x0, 0xc, 0xfe, 0xaa, 0xef, 0xc0,
    0x0, 0x0, 0x7, 0xcf, 0xfd, 0xfd, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x4, 0x87, 0x10,

    /* U+0052 "R" */
    0x9f, 0xff, 0xfc, 0x50, 0x0, 0x9f, 0x97, 0x9f,
    0xf5, 0x0, 0x9f, 0x30, 0x6, 0xfb, 0x0, 0x9f,
    0x30, 0x5, 0xf9, 0x0, 0x9f, 0x52, 0x4d, 0xf3,
    0x0, 0x9f, 0xff, 0xfb, 0x30, 0x0, 0x9f, 0x76,
    0xee, 0x20, 0x0, 0x9f, 0x30, 0x3f, 0xd0, 0x0,
    0x9f, 0x30, 0x9, 0xf7, 0x0, 0x9f, 0x30, 0x1,
    0xef, 0x20, 0x9f, 0x30, 0x0, 0x6f, 0xb0,

    /* U+0053 "S" */
    0x0, 0x6c, 0xff, 0xe6, 0x0, 0x9f, 0xd9, 0x8b,
    0x80, 0x1f, 0xe0, 0x0, 0x0, 0x0, 0xff, 0x10,
    0x0, 0x0, 0x8, 0xfe, 0x70, 0x0, 0x0, 0x6,
    0xef, 0xe5, 0x0, 0x0, 0x0, 0x7e, 0xf6, 0x0,
    0x0, 0x0, 0x2f, 0xe0, 0x1, 0x0, 0x1, 0xff,
    0x2, 0xfb, 0x89, 0xef, 0x90, 0x9, 0xdf, 0xec,
    0x60, 0x0,

    /* U+0054 "T" */
    0xbf, 0xff, 0xff, 0xff, 0x96, 0x88, 0xcf, 0xb8,
    0x85, 0x0, 0x8, 0xf5, 0x0, 0x0, 0x0, 0x8f,
    0x50, 0x0, 0x0, 0x8, 0xf5, 0x0, 0x0, 0x0,
    0x8f, 0x50, 0x0, 0x0, 0x8, 0xf5, 0x0, 0x0,
    0x0, 0x8f, 0x50, 0x0, 0x0, 0x8, 0xf5, 0x0,
    0x0, 0x0, 0x8f, 0x50, 0x0, 0x0, 0x8, 0xf5,
    0x0, 0x0,

    /* U+0055 "U" */
    0xcf, 0x10, 0x0, 0xd, 0xfc, 0xf1, 0x0, 0x0,
    0xdf, 0xcf, 0x10, 0x0, 0xd, 0xfc, 0xf1, 0x0,
    0x0, 0xdf, 0xcf, 0x10, 0x0, 0xd, 0xfc, 0xf1,
    0x0, 0x0, 0xdf, 0xbf, 0x20, 0x0, 0xe, 0xfa,
    0xf4, 0x0, 0x0, 0xfe, 0x7f, 0xb0, 0x0, 0x7f,
    0xa1, 0xef, 0xda, 0xcf, 0xf2, 0x2, 0xae, 0xfe,
    0xa3, 0x0,

    /* U+0056 "V" */
    0xbf, 0x40, 0x0, 0x0, 0xff, 0x5, 0xfa, 0x0,
    0x0, 0x4f, 0x90, 0xf, 0xf0, 0x0, 0xa, 0xf4,
    0x0, 0xaf, 0x40, 0x0, 0xfe, 0x0, 0x4, 0xfa,
    0x0, 0x5f, 0x80, 0x0, 0xe, 0xe0, 0xa, 0xf2,
    0x0, 0x0, 0x8f, 0x40, 0xfc, 0x0, 0x0, 0x3,
    0xf9, 0x5f, 0x60, 0x0, 0x0, 0xd, 0xea, 0xf1,
    0x0, 0x0, 0x0, 0x7f, 0xfb, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x50, 0x0, 0x0,

    /* U+0057 "W" */
    0xaf, 0x50, 0x0, 0x3f, 0xf0, 0x0, 0xc, 0xf2,
    0x6f, 0x90, 0x0, 0x7f, 0xf4, 0x0, 0xf, 0xd0,
    0x1f, 0xd0, 0x0, 0xce, 0xf8, 0x0, 0x4f, 0x90,
    0xd, 0xf1, 0x1, 0xf8, 0xfc, 0x0, 0x8f, 0x40,
    0x8, 0xf5, 0x5, 0xf4, 0xaf, 0x10, 0xbf, 0x0,
    0x4, 0xf9, 0x9, 0xf0, 0x6f, 0x50, 0xfb, 0x0,
    0x0, 0xfd, 0xe, 0xb0, 0x2f, 0x93, 0xf7, 0x0,
    0x0, 0xbf, 0x4f, 0x60, 0xd, 0xd7, 0xf3, 0x0,
    0x0, 0x6f, 0xcf, 0x20, 0x9, 0xfc, 0xe0, 0x0,
    0x0, 0x1f, 0xfd, 0x0, 0x4, 0xff, 0xa0, 0x0,
    0x0, 0xd, 0xf9, 0x0, 0x0, 0xff, 0x50, 0x0,

    /* U+0058 "X" */
    0x4f, 0xe0, 0x0, 0xb, 0xf5, 0xa, 0xf8, 0x0,
    0x4f, 0xb0, 0x1, 0xef, 0x10, 0xdf, 0x20, 0x0,
    0x6f, 0x96, 0xf7, 0x0, 0x0, 0xc, 0xfe, 0xd0,
    0x0, 0x0, 0x5, 0xff, 0x60, 0x0, 0x0, 0xd,
    0xee, 0xd0, 0x0, 0x0, 0x8f, 0x67, 0xf8, 0x0,
    0x3, 0xfd, 0x0, 0xdf, 0x30, 0xd, 0xf4, 0x0,
    0x5f, 0xc0, 0x8f, 0xa0, 0x0, 0xc, 0xf7,

    /* U+0059 "Y" */
    0xaf, 0x60, 0x0, 0x1f, 0xe0, 0x2f, 0xe0, 0x0,
    0x8f, 0x60, 0xa, 0xf5, 0x0, 0xed, 0x0, 0x2,
    0xfd, 0x7, 0xf5, 0x0, 0x0, 0xaf, 0x5e, 0xd0,
    0x0, 0x0, 0x2f, 0xff, 0x40, 0x0, 0x0, 0xa,
    0xfc, 0x0, 0x0, 0x0, 0x5, 0xf8, 0x0, 0x0,
    0x0, 0x5, 0xf8, 0x0, 0x0, 0x0, 0x5, 0xf8,
    0x0, 0x0, 0x0, 0x5, 0xf8, 0x0, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xff, 0xff, 0xf0, 0x28, 0x88, 0x88,
    0xdf, 0x80, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x0, 0x1e, 0xf2, 0x0, 0x0, 0x0, 0xaf, 0x60,
    0x0, 0x0, 0x6, 0xfb, 0x0, 0x0, 0x0, 0x2f,
    0xe1, 0x0, 0x0, 0x0, 0xcf, 0x40, 0x0, 0x0,
    0x8, 0xf9, 0x0, 0x0, 0x0, 0x3f, 0xf9, 0x88,
    0x88, 0x80, 0xbf, 0xff, 0xff, 0xff, 0xf0,

    /* U+005B "[" */
    0x6f, 0xfd, 0x6f, 0x52, 0x6f, 0x20, 0x6f, 0x20,
    0x6f, 0x20, 0x6f, 0x20, 0x6f, 0x20, 0x6f, 0x20,
    0x6f, 0x20, 0x6f, 0x20, 0x6f, 0x20, 0x6f, 0x20,
    0x6f, 0xfd, 0x13, 0x32,

    /* U+005C "\\" */
    0xe, 0xb0, 0x0, 0x0, 0x8, 0xf2, 0x0, 0x0,
    0x1, 0xf8, 0x0, 0x0, 0x0, 0xae, 0x0, 0x0,
    0x0, 0x4f, 0x50, 0x0, 0x0, 0xd, 0xc0, 0x0,
    0x0, 0x7, 0xf2, 0x0, 0x0, 0x1, 0xf9, 0x0,
    0x0, 0x0, 0xaf, 0x0, 0x0, 0x0, 0x3f, 0x60,
    0x0, 0x0, 0xd, 0xc0, 0x0, 0x0, 0x6, 0xf3,
    0x0, 0x0, 0x0, 0xf9,

    /* U+005D "]" */
    0x8f, 0xfb, 0x13, 0xdb, 0x0, 0xdb, 0x0, 0xdb,
    0x0, 0xdb, 0x0, 0xdb, 0x0, 0xdb, 0x0, 0xdb,
    0x0, 0xdb, 0x0, 0xdb, 0x0, 0xdb, 0x0, 0xdb,
    0x8f, 0xfb, 0x13, 0x32,

    /* U+005E "^" */
    0x0, 0x0, 0x70, 0x0, 0x0, 0x0, 0x7f, 0x60,
    0x0, 0x0, 0xe, 0xbe, 0x0, 0x0, 0x8, 0xd0,
    0xd8, 0x0, 0x1, 0xf6, 0x5, 0xf1, 0x0, 0x8e,
    0x0, 0xd, 0x90, 0x1f, 0x60, 0x0, 0x5f, 0x20,

    /* U+005F "_" */
    0xee, 0xee, 0xee, 0x90,

    /* U+0060 "`" */
    0x7, 0x40, 0x0, 0x7f, 0x20, 0x0, 0xac, 0x0,

    /* U+0061 "a" */
    0x3, 0xbe, 0xfc, 0x40, 0x9, 0xa6, 0x6e, 0xf1,
    0x1, 0x0, 0x8, 0xf4, 0x1, 0x8b, 0xdf, 0xf5,
    0x1e, 0xe7, 0x58, 0xf5, 0x5f, 0x60, 0x9, 0xf5,
    0x4f, 0xb3, 0x6f, 0xf5, 0x8, 0xef, 0xa8, 0xf5,

    /* U+0062 "b" */
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x2b, 0xfe, 0x70, 0xdf, 0xd8, 0x7e, 0xf5,
    0xdf, 0x50, 0x3, 0xfc, 0xdf, 0x0, 0x0, 0xfe,
    0xdf, 0x0, 0x0, 0xfd, 0xdf, 0x20, 0x3, 0xfa,
    0xdf, 0xd4, 0x5d, 0xf3, 0xdf, 0x5d, 0xfd, 0x40,

    /* U+0063 "c" */
    0x0, 0x5c, 0xff, 0xb0, 0x6f, 0xe8, 0x7b, 0xf,
    0xe1, 0x0, 0x4, 0xf9, 0x0, 0x0, 0x4f, 0x90,
    0x0, 0x1, 0xfe, 0x0, 0x0, 0x9, 0xfd, 0x77,
    0xb0, 0x7, 0xdf, 0xe9,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x5f, 0x70, 0x0, 0x0, 0x5,
    0xf7, 0x0, 0x0, 0x0, 0x5f, 0x70, 0x0, 0x0,
    0x5, 0xf7, 0x0, 0x8e, 0xfb, 0x7f, 0x70, 0x8f,
    0xc7, 0xaf, 0xf7, 0x1f, 0xe0, 0x0, 0x9f, 0x73,
    0xf9, 0x0, 0x5, 0xf7, 0x4f, 0x80, 0x0, 0x5f,
    0x72, 0xfc, 0x0, 0x9, 0xf7, 0xb, 0xf9, 0x47,
    0xef, 0x70, 0x1a, 0xff, 0xa6, 0xf7,

    /* U+0065 "e" */
    0x0, 0x6d, 0xfd, 0x60, 0x8, 0xf9, 0x5a, 0xf5,
    0x1f, 0xb0, 0x0, 0xec, 0x4f, 0xff, 0xff, 0xfe,
    0x4f, 0xa3, 0x33, 0x33, 0x1f, 0xd0, 0x0, 0x0,
    0x9, 0xfc, 0x67, 0xb5, 0x0, 0x8e, 0xfe, 0xa2,

    /* U+0066 "f" */
    0x0, 0x3c, 0xfa, 0x0, 0xef, 0x75, 0x3, 0xf9,
    0x0, 0x4, 0xf8, 0x0, 0xaf, 0xff, 0xf6, 0x38,
    0xfb, 0x62, 0x4, 0xf9, 0x0, 0x4, 0xf9, 0x0,
    0x4, 0xf9, 0x0, 0x4, 0xf9, 0x0, 0x4, 0xf9,
    0x0, 0x4, 0xf9, 0x0,

    /* U+0067 "g" */
    0x0, 0x8e, 0xfb, 0x7f, 0x70, 0x8f, 0xc7, 0x9f,
    0xf7, 0x1f, 0xe0, 0x0, 0x9f, 0x73, 0xf9, 0x0,
    0x5, 0xf7, 0x4f, 0x90, 0x0, 0x5f, 0x72, 0xfd,
    0x0, 0xa, 0xf7, 0xb, 0xfc, 0x7a, 0xef, 0x70,
    0x1a, 0xfe, 0x96, 0xf7, 0x0, 0x0, 0x0, 0x7f,
    0x60, 0x10, 0x0, 0xd, 0xf2, 0xa, 0xb7, 0x8d,
    0xfa, 0x0, 0x6d, 0xff, 0xd7, 0x0,

    /* U+0068 "h" */
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x2c, 0xfd, 0x40, 0xdf, 0xd8, 0x9f, 0xe0,
    0xdf, 0x50, 0xb, 0xf3, 0xdf, 0x0, 0x8, 0xf4,
    0xdf, 0x0, 0x8, 0xf4, 0xdf, 0x0, 0x8, 0xf4,
    0xdf, 0x0, 0x8, 0xf4, 0xdf, 0x0, 0x8, 0xf4,

    /* U+0069 "i" */
    0xbd, 0x1c, 0xe1, 0x0, 0x0, 0x0, 0xdf, 0xd,
    0xf0, 0xdf, 0xd, 0xf0, 0xdf, 0xd, 0xf0, 0xdf,
    0xd, 0xf0,

    /* U+006A "j" */
    0x0, 0xb, 0xd1, 0x0, 0xb, 0xe1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf0, 0x0,
    0xd, 0xf0, 0x0, 0xd, 0xf0, 0x0, 0xd, 0xf0,
    0x0, 0xd, 0xf0, 0x0, 0xd, 0xf0, 0x0, 0xd,
    0xf0, 0x0, 0xd, 0xf0, 0x0, 0xd, 0xe0, 0x0,
    0x1f, 0xc0, 0x37, 0xcf, 0x50, 0x3e, 0xe8, 0x0,

    /* U+006B "k" */
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x6f, 0xb0, 0xdf, 0x4, 0xfd, 0x0,
    0xdf, 0x1e, 0xe1, 0x0, 0xdf, 0xcf, 0x30, 0x0,
    0xdf, 0xaf, 0x60, 0x0, 0xdf, 0xd, 0xf4, 0x0,
    0xdf, 0x2, 0xef, 0x20, 0xdf, 0x0, 0x4f, 0xe1,

    /* U+006C "l" */
    0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf,
    0xdf, 0xdf, 0xdf, 0xdf,

    /* U+006D "m" */
    0xdf, 0x4d, 0xfc, 0x34, 0xdf, 0xc3, 0xd, 0xfc,
    0x48, 0xfe, 0xd4, 0x7f, 0xd0, 0xdf, 0x30, 0xe,
    0xf5, 0x0, 0xcf, 0xd, 0xf0, 0x0, 0xcf, 0x10,
    0xa, 0xf2, 0xdf, 0x0, 0xc, 0xf1, 0x0, 0xaf,
    0x2d, 0xf0, 0x0, 0xcf, 0x10, 0xa, 0xf2, 0xdf,
    0x0, 0xc, 0xf1, 0x0, 0xaf, 0x2d, 0xf0, 0x0,
    0xcf, 0x10, 0xa, 0xf2,

    /* U+006E "n" */
    0xdf, 0x3c, 0xfd, 0x40, 0xdf, 0xc4, 0x6f, 0xe0,
    0xdf, 0x30, 0xa, 0xf3, 0xdf, 0x0, 0x8, 0xf4,
    0xdf, 0x0, 0x8, 0xf5, 0xdf, 0x0, 0x8, 0xf5,
    0xdf, 0x0, 0x8, 0xf5, 0xdf, 0x0, 0x8, 0xf5,

    /* U+006F "o" */
    0x0, 0x6c, 0xff, 0xb3, 0x0, 0x8f, 0xd7, 0x8f,
    0xf3, 0x1f, 0xe0, 0x0, 0x5f, 0xa4, 0xf9, 0x0,
    0x0, 0xfd, 0x4f, 0x90, 0x0, 0xf, 0xd1, 0xfd,
    0x0, 0x5, 0xf9, 0x9, 0xfd, 0x78, 0xff, 0x20,
    0x7, 0xdf, 0xea, 0x20,

    /* U+0070 "p" */
    0xdf, 0x3c, 0xfe, 0x70, 0xdf, 0xd5, 0x4c, 0xf5,
    0xdf, 0x30, 0x2, 0xfc, 0xdf, 0x0, 0x0, 0xee,
    0xdf, 0x0, 0x0, 0xfd, 0xdf, 0x30, 0x4, 0xfa,
    0xdf, 0xd7, 0x7f, 0xf3, 0xdf, 0x4d, 0xfd, 0x40,
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x8e, 0xfb, 0x7f, 0x70, 0x8f, 0xc7, 0xaf,
    0xf7, 0x1f, 0xe0, 0x0, 0x9f, 0x73, 0xf9, 0x0,
    0x5, 0xf7, 0x4f, 0x90, 0x0, 0x5f, 0x72, 0xfd,
    0x0, 0xa, 0xf7, 0xb, 0xfc, 0x7a, 0xef, 0x70,
    0x1a, 0xfe, 0x96, 0xf7, 0x0, 0x0, 0x0, 0x5f,
    0x70, 0x0, 0x0, 0x5, 0xf7, 0x0, 0x0, 0x0,
    0x5f, 0x70, 0x0, 0x0, 0x5, 0xf7,

    /* U+0072 "r" */
    0xdf, 0x3d, 0xdd, 0xfd, 0x87, 0xdf, 0x60, 0xd,
    0xf1, 0x0, 0xdf, 0x0, 0xd, 0xf0, 0x0, 0xdf,
    0x0, 0xd, 0xf0, 0x0,

    /* U+0073 "s" */
    0x3, 0xbf, 0xfb, 0x2, 0xfd, 0x66, 0x90, 0x4f,
    0xa0, 0x0, 0x0, 0xcf, 0xd6, 0x0, 0x0, 0x6c,
    0xfd, 0x0, 0x0, 0x9, 0xf4, 0x4a, 0x65, 0xdf,
    0x23, 0xdf, 0xfc, 0x40,

    /* U+0074 "t" */
    0x0, 0x1, 0x0, 0x4, 0xf7, 0x0, 0x5, 0xf7,
    0x0, 0xaf, 0xff, 0xf6, 0x49, 0xfa, 0x62, 0x5,
    0xf7, 0x0, 0x5, 0xf7, 0x0, 0x5, 0xf7, 0x0,
    0x5, 0xf8, 0x0, 0x3, 0xfe, 0x73, 0x0, 0x9e,
    0xf5,

    /* U+0075 "u" */
    0xfd, 0x0, 0xa, 0xf2, 0xfd, 0x0, 0xa, 0xf2,
    0xfd, 0x0, 0xa, 0xf2, 0xfd, 0x0, 0xa, 0xf2,
    0xfd, 0x0, 0xa, 0xf2, 0xdf, 0x0, 0xd, 0xf2,
    0x9f, 0x94, 0x9f, 0xf2, 0x1a, 0xfe, 0x8a, 0xf2,

    /* U+0076 "v" */
    0xbf, 0x30, 0x0, 0xfe, 0x5, 0xf8, 0x0, 0x5f,
    0x70, 0xf, 0xd0, 0xa, 0xf1, 0x0, 0xaf, 0x20,
    0xfb, 0x0, 0x4, 0xf7, 0x5f, 0x50, 0x0, 0xe,
    0xca, 0xe0, 0x0, 0x0, 0x8f, 0xe9, 0x0, 0x0,
    0x2, 0xff, 0x20, 0x0,

    /* U+0077 "w" */
    0xbf, 0x20, 0xc, 0xf3, 0x0, 0xec, 0x6f, 0x60,
    0xf, 0xf7, 0x2, 0xf7, 0x1f, 0xa0, 0x5f, 0xcb,
    0x6, 0xf3, 0xd, 0xe0, 0x9a, 0x8e, 0xa, 0xe0,
    0x8, 0xf2, 0xe6, 0x4f, 0x3e, 0x90, 0x3, 0xf9,
    0xf1, 0xf, 0x9f, 0x50, 0x0, 0xef, 0xc0, 0xb,
    0xff, 0x0, 0x0, 0xaf, 0x80, 0x7, 0xfb, 0x0,

    /* U+0078 "x" */
    0x6f, 0xa0, 0x6, 0xf8, 0xc, 0xf3, 0xe, 0xd0,
    0x2, 0xfb, 0x8f, 0x30, 0x0, 0x8f, 0xf8, 0x0,
    0x0, 0x7f, 0xf8, 0x0, 0x2, 0xfa, 0xaf, 0x30,
    0xc, 0xf2, 0x2f, 0xd0, 0x8f, 0x80, 0x8, 0xf8,

    /* U+0079 "y" */
    0xcf, 0x30, 0x0, 0xee, 0x5, 0xf8, 0x0, 0x3f,
    0x80, 0xf, 0xd0, 0x8, 0xf2, 0x0, 0x9f, 0x20,
    0xec, 0x0, 0x3, 0xf7, 0x3f, 0x60, 0x0, 0xd,
    0xd8, 0xf0, 0x0, 0x0, 0x6f, 0xea, 0x0, 0x0,
    0x1, 0xff, 0x30, 0x0, 0x0, 0xe, 0xd0, 0x0,
    0x0, 0x5, 0xf7, 0x0, 0x0, 0x47, 0xed, 0x0,
    0x0, 0x9, 0xfb, 0x10, 0x0, 0x0,

    /* U+007A "z" */
    0x5f, 0xff, 0xff, 0xf1, 0x26, 0x66, 0xbf, 0x80,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0xd, 0xe1, 0x0,
    0x0, 0xaf, 0x50, 0x0, 0x6, 0xf9, 0x0, 0x0,
    0x2f, 0xf6, 0x66, 0x60, 0xbf, 0xff, 0xff, 0xf1,

    /* U+007B "{" */
    0x0, 0x3c, 0xb0, 0xd, 0xd3, 0x0, 0xf8, 0x0,
    0xf, 0x80, 0x0, 0xf8, 0x0, 0x5f, 0x50, 0x4f,
    0x80, 0x0, 0x8f, 0x40, 0x0, 0xf8, 0x0, 0xf,
    0x80, 0x0, 0xf8, 0x0, 0xe, 0xb0, 0x0, 0x5f,
    0xb0, 0x0, 0x1,

    /* U+007C "|" */
    0x48, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f,
    0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f,

    /* U+007D "}" */
    0x6e, 0x70, 0x1, 0x9f, 0x20, 0x3, 0xf5, 0x0,
    0x2f, 0x50, 0x2, 0xf5, 0x0, 0xf, 0xa0, 0x0,
    0x4f, 0x90, 0xe, 0xc2, 0x2, 0xf5, 0x0, 0x2f,
    0x50, 0x2, 0xf5, 0x0, 0x7f, 0x30, 0x6f, 0xa0,
    0x1, 0x0, 0x0,

    /* U+007E "~" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xe9, 0x32,
    0xe6, 0x4f, 0x21, 0x9f, 0xfd, 0x11, 0x30, 0x0,
    0x2, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 78, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 27, .adv_w = 151, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 142, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 215, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 183, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 66, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 273, .adv_w = 85, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 308, .adv_w = 85, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 343, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 364, .adv_w = 178, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 62, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 406, .adv_w = 103, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 414, .adv_w = 62, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 106, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 472, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 103, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 137, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 62, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 62, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 963, .adv_w = 178, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 178, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1026, .adv_w = 178, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 244, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1199, .adv_w = 172, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 184, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1414, .adv_w = 133, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1453, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1492, .adv_w = 179, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1553, .adv_w = 188, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1608, .adv_w = 75, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1625, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1658, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1747, .adv_w = 237, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1819, .adv_w = 196, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1874, .adv_w = 194, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1940, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1984, .adv_w = 194, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2069, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2124, .adv_w = 139, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2174, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2224, .adv_w = 180, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2274, .adv_w = 164, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2335, .adv_w = 247, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2423, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2478, .adv_w = 148, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2533, .adv_w = 150, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2588, .adv_w = 85, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2616, .adv_w = 104, .box_w = 8, .box_h = 13, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2668, .adv_w = 85, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2696, .adv_w = 178, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2728, .adv_w = 106, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2732, .adv_w = 74, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 2740, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2772, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2820, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2848, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2902, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2934, .adv_w = 88, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2970, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3024, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3072, .adv_w = 67, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3090, .adv_w = 67, .box_w = 6, .box_h = 16, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 3138, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3186, .adv_w = 67, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3198, .adv_w = 227, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3250, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3282, .adv_w = 153, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3318, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3366, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3420, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3440, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3468, .adv_w = 93, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3501, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3533, .adv_w = 130, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3569, .adv_w = 194, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3617, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3649, .adv_w = 130, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3703, .adv_w = 119, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3735, .adv_w = 85, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3770, .adv_w = 71, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3786, .adv_w = 85, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3821, .adv_w = 178, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 2}
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

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
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
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_seguisb16 = {
#else
lv_font_t ui_font_seguisb16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SEGUISB16*/

