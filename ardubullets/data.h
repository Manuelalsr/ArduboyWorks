#pragma once

/*---------------------------------------------------------------------------*/
/*                                Image Data                                 */
/*---------------------------------------------------------------------------*/

#define IMG_CRAFT_W 7
#define IMG_CRAFT_H 7

PROGMEM static const uint8_t imgPlayer[7] = { // 7x7
    0x36, 0x7F, 0x77, 0x55, 0x14, 0x08, 0x08
};

PROGMEM static const uint8_t imgEnemy[][7] = { // 7x7 x5
    { 0x08, 0x2A, 0x6B, 0x7F, 0x3E, 0x2A, 0x08 },
    { 0x1C, 0x3E, 0x36, 0x63, 0x7F, 0x63, 0x41 },
    { 0x08, 0x1C, 0x49, 0x5D, 0x7F, 0x2A, 0x49 },
    { 0x14, 0x3E, 0x7F, 0x6B, 0x63, 0x22, 0x14 },
    { 0x77, 0x5D, 0x55, 0x1C, 0x3E, 0x36, 0x22 }
};

#define IMG_EXPLO_W 15
#define IMG_EXPLO_H 15
#define IMG_EXPLO_ID_MAX 6

PROGMEM static const uint8_t imgExplo[][30] = { // 15x15 x6
    {
        0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00
    },{
        0x00, 0xE0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xE0, 0x00, 0x00,
        0x03, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x00
    },{
        0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0x3F, 0x3F, 0x3F, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x03,
        0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 0x3F, 0x3F, 0x1F, 0x0F, 0x03
    },{
        0xE0, 0xF8, 0xFC, 0xFE, 0x3E, 0x1F, 0x0F, 0x0F, 0x0F, 0x1F, 0x3E, 0xFE, 0xFC, 0xF8, 0xE0, 0x03,
        0x0F, 0x1F, 0x3F, 0x3E, 0x7C, 0x78, 0x78, 0x78, 0x7C, 0x3E, 0x3F, 0x1F, 0x0F, 0x03
    },{
        0xE0, 0xF8, 0x1C, 0x0E, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06, 0x0E, 0x1C, 0xF8, 0xE0, 0x03,
        0x0F, 0x1C, 0x38, 0x30, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0x38, 0x1C, 0x0F, 0x03
    },{
        0xE0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xE0, 0x03,
        0x0C, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x0C, 0x03
    }
};

#define IMG_READY_W 48
#define IMG_READY_H 16

PROGMEM static const uint8_t imgReady[96] = { // 48x16
    0xFE, 0xFE, 0xFE, 0xC6, 0xFE, 0xFE, 0x7C, 0x00, 0xE0, 0xF0, 0xF0, 0xB0, 0xF0, 0xF0, 0xE0, 0x00,
    0xE0, 0xF0, 0xF0, 0x30, 0xF0, 0xF0, 0xE0, 0x00, 0xE0, 0xF0, 0xF0, 0x20, 0xFE, 0xFE, 0xFE, 0x00,
    0x70, 0xF0, 0xF0, 0x80, 0x00, 0xF0, 0xF0, 0x70, 0x00, 0xDC, 0xDE, 0xDE, 0x86, 0xFE, 0xFC, 0xF8,
    0x3F, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x1F, 0x3F, 0x3F, 0x31, 0x3D, 0x3D, 0x1D, 0x00,
    0x1E, 0x3E, 0x3E, 0x13, 0x3F, 0x3F, 0x3F, 0x00, 0x1F, 0x3F, 0x3F, 0x10, 0x3F, 0x3F, 0x3F, 0x00,
    0x00, 0x63, 0x7F, 0x7F, 0x78, 0x7F, 0x1F, 0x00, 0x00, 0x3B, 0x3B, 0x3B, 0x01, 0x01, 0x01, 0x00
};

#define IMG_FAILED_W 46
#define IMG_FAILED_H 16

PROGMEM static const uint8_t imgFailed[92] = { // 46x16
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0x00, 0xE0, 0xF0, 0xF0, 0x30, 0xF0, 0xF0, 0xE0, 0x00, 0xF6, 0xF6,
    0xF6, 0x00, 0xFE, 0xFE, 0xFE, 0x00, 0xE0, 0xF0, 0xF0, 0xB0, 0xF0, 0xF0, 0xE0, 0x00, 0xE0, 0xF0,
    0xF0, 0x20, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F,
    0x3F, 0x00, 0x00, 0x00, 0x1E, 0x3E, 0x3E, 0x13, 0x3F, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x3F, 0x00,
    0x3F, 0x3F, 0x3F, 0x00, 0x1F, 0x3F, 0x3F, 0x31, 0x3D, 0x3D, 0x1D, 0x00, 0x1F, 0x3F, 0x3F, 0x10,
    0x3F, 0x3F, 0x3F, 0x00, 0x38, 0x38, 0x00, 0x38, 0x38, 0x00, 0x38, 0x38
};

#define IMG_COMPLETED_W 72
#define IMG_COMPLETED_H 16

PROGMEM static const uint8_t imgCompleted[144] = { // 72x16
    0xFC, 0xFE, 0xFE, 0x06, 0x3E, 0x3E, 0x3C, 0x00, 0xE0, 0xF0, 0xF0, 0x30, 0xF0, 0xF0, 0xE0, 0x00,
    0xF0, 0xF0, 0xF0, 0x20, 0xF0, 0xF0, 0xE0, 0x20, 0xF0, 0xF0, 0xE0, 0x00, 0xF0, 0xF0, 0xF0, 0x20,
    0xF0, 0xF0, 0xE0, 0x00, 0xFE, 0xFE, 0xFE, 0x00, 0xE0, 0xF0, 0xF0, 0xB0, 0xF0, 0xF0, 0xE0, 0x00,
    0xFC, 0xFC, 0xFC, 0x30, 0x00, 0xE0, 0xF0, 0xF0, 0xB0, 0xF0, 0xF0, 0xE0, 0x00, 0xE0, 0xF0, 0xF0,
    0x20, 0xFE, 0xFE, 0xFE, 0x00, 0xFE, 0xFE, 0xFE, 0x1F, 0x3F, 0x3F, 0x30, 0x3F, 0x1F, 0x0F, 0x00,
    0x1F, 0x3F, 0x3F, 0x30, 0x3F, 0x3F, 0x1F, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x3F, 0x00,
    0x3F, 0x3F, 0x3F, 0x00, 0x7F, 0x7F, 0x7F, 0x10, 0x3F, 0x3F, 0x1F, 0x00, 0x3F, 0x3F, 0x3F, 0x00,
    0x1F, 0x3F, 0x3F, 0x31, 0x3D, 0x3D, 0x1D, 0x00, 0x3F, 0x3F, 0x3F, 0x30, 0x00, 0x1F, 0x3F, 0x3F,
    0x31, 0x3D, 0x3D, 0x1D, 0x00, 0x1F, 0x3F, 0x3F, 0x10, 0x3F, 0x3F, 0x3F, 0x00, 0x3B, 0x3B, 0x3B
};

/*---------------------------------------------------------------------------*/
/*                                Sound Data                                 */
/*---------------------------------------------------------------------------*/

enum {
    SND_PRIO_START = 0,
    SND_PRIO_OVER,
    SND_PRIO_DEFEAT,
    SND_PRIO_ENTRY,
};

PROGMEM static const byte soundStart[] = {
    0x90, 0x48, 0x00, 0x64, 0x90, 0x4A, 0x00, 0x64, 0x90, 0x4C, 0x00, 0x64, 0x90, 0x4D, 0x00, 0x64,
    0x90, 0x4F, 0x00, 0xC8, 0x80, 0xF0
};

PROGMEM static const byte soundOver[] = {
    0xDE, 0x94, 0x50, 0x00, 0x08, 0x94, 0x47, 0x00, 0x08, 0x94, 0x4C, 0x00, 0x08, 0x94, 0x43, 0x00,
    0x08, 0xE4, 0x80, 0xF0
};

PROGMEM static const byte soundClear[] = {
    0x90, 0x51, 0x00, 0x28, 0x80, 0x00, 0x28, 0x90, 0x56, 0x00, 0x28, 0x80, 0x00, 0x28, 0x90, 0x5A,
    0x00, 0x28, 0x80, 0x00, 0x28, 0xE3, 0xF0
};

PROGMEM static const byte soundEntry[] = {
    0x90, 0x4C, 0x00, 0x0A, 0x90, 0x49, 0x00, 0x0A, 0x80, 0xF0
};

PROGMEM static const byte soundDefeat[] = {
    0xDD, 0x9C, 0x5D, 0x00, 0x0A, 0x9C, 0x51, 0x00, 0x0A, 0xE3, 0x80, 0xF0
};

/*---------------------------------------------------------------------------*/
/*                          Trigonometric Functions                          */
/*---------------------------------------------------------------------------*/

#define LED_VALUE(r, g, b)  ((r) * 25 + (g) * 5 + (b))
#define LED_IDX_OVER        5
#define LED_LEVEL_OVER      16
#define LED_LEVEL_NORMAL    8

PROGMEM static const uint8_t ledValues[] = {
    LED_VALUE(3, 2, 0), LED_VALUE(0, 2, 4), LED_VALUE(4, 0, 0),
    LED_VALUE(3, 0, 4), LED_VALUE(0, 3, 0), LED_VALUE(3, 3, 3),
};

PROGMEM static const uint8_t sineTable[] = {
    0, 3, 6, 9, 12, 15, 18, 21, 24, 28, 31, 34, 37, 40, 43, 46, 48, 51, 54, 57, 60, 63, 65, 68, 71,
    73, 76, 78, 81, 83, 85, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 109, 111, 112, 114,
    115, 117, 118, 119, 120, 121, 122, 123, 124, 124, 125, 126, 126, 127, 127, 127, 127, 127, 128
};

static int16_t mySin(int8_t deg, int16_t rad)
{
    if (deg < 0) rad = -rad, deg &= 127;
    if (deg > 64) deg = 128 - deg;
    return pgm_read_byte(sineTable + deg) * rad >> 7;
}

#define myCos(deg, rad) mySin((deg) + 64, rad)
#define myAtan2f(y, x)  (int8_t)(atan2f((y), (x)) * 128.0f / PI + 0.5f)
