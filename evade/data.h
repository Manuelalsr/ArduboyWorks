#pragma once

/*---------------------------------------------------------------------------*/
/*                                Image Data                                 */
/*---------------------------------------------------------------------------*/

#define IMG_PLAYER_W 16
#define IMG_PLAYER_H 16

PROGMEM static const uint8_t imgPlayer[][2][32] = { // 16x16 x2 x9
    {
        {
            0xF0, 0xF0, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xF0,
            0x00, 0x00, 0x01, 0x03, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0x01, 0x00
        },{
            0x60, 0x60, 0x98, 0x65, 0x82, 0x81, 0x01, 0x81, 0x02, 0x81, 0x01, 0xC3, 0xBA, 0x16, 0x60, 0x60,
            0x00, 0x00, 0x00, 0x01, 0x03, 0x3B, 0xFB, 0xFB, 0x1B, 0x79, 0x7B, 0x1B, 0x01, 0x01, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0xD0, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0x30, 0x00,
            0x0C, 0x1E, 0xDF, 0xEF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0x71, 0x00
        },{
            0x00, 0x00, 0x00, 0xD0, 0x30, 0x08, 0x08, 0x08, 0x10, 0x08, 0x08, 0x18, 0xD0, 0x30, 0x00, 0x00,
            0x00, 0x0C, 0x0C, 0xC1, 0xEA, 0xEC, 0x68, 0x2C, 0x68, 0xCC, 0xE8, 0xCE, 0x22, 0x61, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0x78, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xEE, 0x40, 0x00,
            0x06, 0x0F, 0xCF, 0xEF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xEF, 0xCF, 0x0F, 0x06, 0x00
        },{
            0x00, 0x00, 0x00, 0x78, 0xF4, 0x9A, 0xEA, 0xF2, 0xC2, 0x02, 0x04, 0x12, 0xAE, 0x40, 0x00, 0x00,
            0x00, 0x06, 0x06, 0xC0, 0xEC, 0x6C, 0x2E, 0x2E, 0x6E, 0x4E, 0xEF, 0xC6, 0x01, 0x06, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFE, 0xFF, 0xFF, 0xCE, 0x80, 0x00,
            0x00, 0x00, 0xED, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xEF, 0xC7, 0x80, 0x00
        },{
            0x00, 0x00, 0x00, 0xF0, 0xE8, 0x34, 0xD4, 0xE4, 0x84, 0x08, 0x04, 0x32, 0x4E, 0x80, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x6C, 0x6D, 0x21, 0x2D, 0x2D, 0x2D, 0x4C, 0x6E, 0xEC, 0xC3, 0x80, 0x00, 0x00
        }
    },{
        {
            0x00, 0x80, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFE, 0xFE, 0xFC, 0xC0, 0x80,
            0x03, 0x07, 0x07, 0x0F, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x0D, 0x00
        },{
            0x00, 0x00, 0x00, 0xF0, 0xE8, 0x74, 0x74, 0xE4, 0xC4, 0x04, 0x08, 0x24, 0x5C, 0x40, 0x80, 0x00,
            0x00, 0x03, 0x03, 0x04, 0x05, 0xE5, 0xED, 0xAD, 0x2D, 0x6C, 0x4E, 0x66, 0x0B, 0x0D, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0x74, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x4C, 0x00,
            0x06, 0x0F, 0x0F, 0xC7, 0xEF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xEF, 0xC7, 0x0F, 0x0F, 0x06
        },{
            0x00, 0x00, 0x00, 0x74, 0x8C, 0x02, 0x02, 0x02, 0x04, 0x02, 0x02, 0x86, 0xB4, 0x4C, 0x00, 0x00,
            0x00, 0x06, 0x06, 0x00, 0xC6, 0xEF, 0x6E, 0x2F, 0x2C, 0x4F, 0xEE, 0xC7, 0x00, 0x06, 0x06, 0x00
        }
    },{
        {
            0x00, 0x00, 0xE6, 0xFE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x58, 0x00,
            0x0C, 0x1E, 0x1E, 0x6F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xEF, 0x47, 0x07, 0x03, 0x00
        },{
            0x00, 0x00, 0x00, 0xE4, 0x18, 0x04, 0x04, 0x04, 0x08, 0x04, 0x04, 0x0C, 0xA8, 0x58, 0x00, 0x00,
            0x00, 0x0C, 0x0C, 0x00, 0x6F, 0x6E, 0x6C, 0x2E, 0x6C, 0xCE, 0xEC, 0x47, 0x00, 0x03, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0xE8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xF8, 0x30, 0x00,
            0x00, 0x03, 0x07, 0x47, 0xEF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x6F, 0x1F, 0x1F, 0x0C
        },{
            0x00, 0x00, 0x00, 0xE8, 0x18, 0x04, 0x04, 0x04, 0x08, 0x04, 0x04, 0x0C, 0x48, 0xB0, 0x00, 0x00,
            0x00, 0x00, 0x03, 0x00, 0x47, 0xEE, 0xEC, 0x6E, 0x2C, 0x6E, 0x4C, 0x6E, 0x01, 0x0D, 0x0C, 0x00
        }
    },{
        {
            0x00, 0x40, 0xEE, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0x78, 0x00, 0x00,
            0x00, 0x06, 0x0F, 0xCF, 0xEF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xEF, 0xCF, 0x0F, 0x06
        },{
            0x00, 0x00, 0x40, 0xAE, 0x12, 0x04, 0x02, 0xC2, 0xF2, 0xEA, 0x9A, 0xF4, 0x78, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x06, 0x01, 0xC6, 0xEF, 0x6E, 0x6E, 0x0E, 0x2E, 0x6C, 0xEC, 0xC0, 0x06, 0x06, 0x00
        }
    },{
        {
            0x80, 0xC0, 0xFC, 0xFE, 0xFE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x80, 0x00,
            0x00, 0x0D, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x0F, 0x07, 0x07, 0x03
        },{
            0x00, 0x80, 0x40, 0x5C, 0x24, 0x08, 0x04, 0xC4, 0xE4, 0xD4, 0x34, 0xE8, 0xF0, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x0D, 0x09, 0x66, 0x6C, 0x6C, 0x2D, 0x8D, 0xED, 0xE5, 0x05, 0x04, 0x03, 0x03, 0x00
        }
    },{
        {
            0x00, 0x80, 0xCE, 0xFF, 0xFF, 0xFE, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x00,
            0x00, 0x80, 0xC7, 0xEF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xED, 0x00, 0x00
        },{
            0x00, 0x00, 0x80, 0x4E, 0x32, 0x04, 0x08, 0x84, 0xE4, 0x74, 0x74, 0xE8, 0xF0, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x80, 0xC3, 0xCC, 0x6E, 0x6C, 0x2D, 0x2D, 0x0D, 0x21, 0x6D, 0x6C, 0x00, 0x00, 0x00
        }
    },{
        {
            0x00, 0xD3, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xAF, 0x00,
            0x03, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x07, 0x03
        },{
            0x00, 0x00, 0x52, 0x74, 0xCC, 0x02, 0x02, 0x02, 0x04, 0x02, 0x02, 0xD2, 0xAC, 0x26, 0x00, 0x00,
            0x00, 0x03, 0x1B, 0x10, 0x36, 0x37, 0x16, 0x17, 0x16, 0x27, 0x36, 0x17, 0x18, 0x03, 0x03, 0x00
        }
    },{
        {
            0x80, 0xC0, 0xDE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF8, 0xFC, 0xFC, 0xFE, 0xDE, 0xDE, 0xCE, 0x80,
            0x01, 0x1B, 0x3F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x17, 0x01
        },{
            0x00, 0x80, 0x80, 0x1C, 0xCC, 0x68, 0xA8, 0xE0, 0xE0, 0xA8, 0x68, 0xCC, 0x0C, 0x8C, 0x80, 0x00,
            0x00, 0x01, 0x0A, 0x3E, 0x20, 0x21, 0x40, 0x43, 0x41, 0x21, 0x21, 0x13, 0x1C, 0x05, 0x01, 0x00
        }
    }
};

#define IMG_FIGURE_W 10
#define IMG_FIGURE_H 14

PROGMEM static const uint8_t imgFigure[][2][20] = {  // 10x14 x2 x10
    {
        {
            0x80, 0xF0, 0xFC, 0xFE, 0x7F, 0x9F, 0xFF, 0xFF, 0xFE, 0xFC, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x1F,
            0x0F, 0x07, 0x03, 0x00
        },{
            0x00, 0x80, 0xF0, 0x7C, 0x1E, 0x06, 0x86, 0xFE, 0xFC, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x0C, 0x0E,
            0x07, 0x03, 0x00, 0x00
        }
    },{
        {
            0x00, 0x00, 0x80, 0xFC, 0xFE, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F,
            0x00, 0x00, 0x00, 0x00
        },{
            0x00, 0x00, 0x00, 0x80, 0xFC, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
            0x00, 0x00, 0x00, 0x00
        }
    },{
        {
            0x0E, 0x0E, 0x8E, 0xEE, 0xFE, 0xFE, 0x7E, 0x3C, 0x08, 0x00, 0x0E, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
            0x0E, 0x0E, 0x0E, 0x0E
        },{
            0x00, 0x04, 0x04, 0x84, 0xE4, 0x7C, 0x3C, 0x08, 0x00, 0x00, 0x00, 0x06, 0x07, 0x07, 0x05, 0x04,
            0x04, 0x04, 0x04, 0x00
        }
    },{
        {
            0x80, 0xC7, 0xC7, 0xE7, 0xF7, 0xFF, 0xFF, 0xFE, 0x8C, 0x00, 0x03, 0x3B, 0x3F, 0x3D, 0x1F, 0x1F,
            0x0F, 0x07, 0x01, 0x00
        },{
            0x00, 0x80, 0x82, 0xC2, 0xE2, 0xF2, 0xBE, 0x8C, 0x00, 0x00, 0x00, 0x01, 0x19, 0x18, 0x0C, 0x0F,
            0x07, 0x01, 0x00, 0x00
        }
    },{
        {
            0x80, 0xE0, 0xF0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x9F, 0x80, 0x07, 0x07, 0x07, 0x07, 0x1F, 0x1F,
            0x1F, 0x1F, 0x03, 0x03
        },{
            0x00, 0x80, 0xE0, 0x70, 0x3C, 0xEE, 0xFE, 0x1E, 0x00, 0x00, 0x03, 0x03, 0x03, 0x02, 0x02, 0x0F,
            0x0F, 0x03, 0x01, 0x01
        }
    },{
        {
            0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xE7, 0xC7, 0x87, 0x03, 0x03, 0x1B, 0x1F, 0x1D, 0x1E,
            0x1F, 0x0F, 0x07, 0x01
        },{
            0x00, 0xC0, 0xFF, 0xFF, 0x44, 0x46, 0x46, 0xC2, 0x82, 0x02, 0x00, 0x01, 0x01, 0x09, 0x08, 0x0C,
            0x0E, 0x07, 0x01, 0x00
        }
    },{
        {
            0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xCF, 0xC3, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x3F, 0x3D,
            0x3F, 0x1F, 0x0F, 0x03
        },{
            0x00, 0x00, 0xC0, 0xF8, 0xBE, 0x8E, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x11, 0x18,
            0x1C, 0x0F, 0x03, 0x00
        }
    },{
        {
            0xFC, 0xFE, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x0F,
            0x07, 0x03, 0x00, 0x00
        },{
            0x00, 0xFC, 0xFE, 0x06, 0x02, 0xC2, 0xFA, 0x7E, 0x1E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07,
            0x03, 0x00, 0x00, 0x00
        }
    },{
        {
            0x0E, 0x9F, 0xFF, 0xFF, 0xF7, 0xF7, 0xFF, 0xBF, 0x3E, 0x1C, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F,
            0x0F, 0x07, 0x02, 0x00
        },{
            0x00, 0x0E, 0x9E, 0xF2, 0xE2, 0xE2, 0xB2, 0x1E, 0x1C, 0x08, 0x06, 0x07, 0x0F, 0x09, 0x08, 0x0F,
            0x07, 0x02, 0x00, 0x00
        }
    },{
        {
            0x1C, 0x3E, 0x7F, 0x7F, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x1F,
            0x0F, 0x03, 0x00, 0x00
        },{
            0x00, 0x1C, 0x3E, 0x27, 0x33, 0xB1, 0xF9, 0xFF, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F,
            0x03, 0x00, 0x00, 0x00
        }
    }
};

#define IMG_READY_W 84
#define IMG_READY_H 24

PROGMEM static const uint8_t imgReady[] = { // 84x24
    0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x20, 0x20, 0x20, 0x60, 0xC0, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x30, 0x30, 0x10, 0x10, 0x10, 0x10, 0x90,
    0xF0, 0xF0, 0xE0, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xDF, 0xE0, 0xE0, 0x70, 0x78, 0x3C, 0x1E, 0x1F,
    0x0F, 0x03, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x38, 0x18, 0x98, 0x98, 0xF8, 0xF0, 0xE0,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x18, 0x08, 0x08, 0xF8, 0xF8, 0xF0, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0x70, 0x30, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x1F, 0x3F, 0xF8, 0xF0, 0xFC, 0x3E, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0,
    0xF8, 0x1E, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x01, 0x03, 0x03,
    0x07, 0x06, 0x0C, 0x18, 0x18, 0x30, 0x60, 0x40, 0x00, 0x03, 0x0F, 0x1F, 0x39, 0x31, 0x31, 0x31,
    0x31, 0x38, 0x18, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x30, 0x38, 0x1C, 0x0E, 0x07, 0x07, 0x3F,
    0x7F, 0x70, 0x40, 0x00, 0x00, 0x08, 0x3F, 0x7F, 0x63, 0x60, 0x60, 0x70, 0x30, 0x3F, 0x1F, 0x1F,
    0x0C, 0x00, 0x00, 0x60, 0x78, 0x7E, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x3C, 0x10, 0x00, 0x00, 0x00, 0x00
};

#define IMG_GAMEOVER_W 120
#define IMG_GAMEOVER_H 24

PROGMEM static const uint8_t imgGameOver[] = { // 120x24
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF0, 0x70, 0x30, 0x30, 0x30, 0x60, 0xE0, 0xC0,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0xFE, 0x3F, 0x07, 0x23, 0x31,
    0x30, 0x18, 0x19, 0x19, 0x98, 0xF8, 0xFC, 0x7C, 0x18, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x18,
    0x08, 0x08, 0xF8, 0xF8, 0xF0, 0x40, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x80, 0xC0, 0xC0,
    0xC0, 0xC0, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x38, 0x18,
    0x98, 0x98, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0x3F, 0x07, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x00, 0x10, 0xF0, 0xF0, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0x30, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x38, 0x18, 0x98, 0x98,
    0xF8, 0xF0, 0xE0, 0x00, 0x00, 0xF0, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0x40, 0xC0, 0xC0, 0x40, 0x00,
    0x00, 0x03, 0x07, 0x0F, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x1F, 0x1F, 0x07, 0x00,
    0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x30, 0x38, 0x1C, 0x0E, 0x07, 0x07, 0x3F, 0x7F, 0x70, 0x40, 0x00,
    0x00, 0x7F, 0x7F, 0x7F, 0x1F, 0x07, 0x01, 0x3F, 0x7F, 0x7F, 0x3F, 0x07, 0x03, 0x03, 0x1F, 0x3F,
    0x38, 0x20, 0x03, 0x0F, 0x1F, 0x39, 0x31, 0x31, 0x31, 0x31, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x0E, 0x07, 0x07, 0x03,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x3E, 0x38, 0x1E, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x0F, 0x1F, 0x39, 0x31, 0x31, 0x31, 0x31, 0x38, 0x18, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

PROGMEM static const uint8_t ditherPatterns[] = { // 8 grades
    0x11, 0x00, 0x55, 0x00, 0x55, 0x22, 0x55, 0xAA, 0x77, 0xAA, 0xFF, 0xAA, 0xFF, 0xBB, 0xFF, 0xFF
};

/*---------------------------------------------------------------------------*/
/*                                Sound Data                                 */
/*---------------------------------------------------------------------------*/

enum {
    SND_PRIO_START = 0,
    SND_PRIO_OVER,
    SND_PRIO_STEP,
};

PROGMEM static const byte soundStart[] = {
    0x90, 0x48, 0x00, 0x64, 0x90, 0x4A, 0x00, 0x64, 0x90, 0x4C, 0x00, 0x64, 0x90, 0x4D, 0x00, 0x64,
    0x90, 0x4F, 0x00, 0xC8, 0x80, 0xF0
};

PROGMEM static const byte soundOver[] = {
    0x90, 0x37, 0x00, 0x78, 0x90, 0x36, 0x00, 0x8C, 0x90, 0x35, 0x00, 0xA0, 0x90, 0x34, 0x00, 0xB4,
    0x90, 0x33, 0x00, 0xC8, 0x90, 0x32, 0x00, 0xDC, 0x90, 0x31, 0x00, 0xF0, 0x90, 0x30, 0x00, 0xFF,
    0x80, 0xF0
};
