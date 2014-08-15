#include "Configuration.h"
#ifdef ENABLE_ULTILCD2
#include "UltiLCD2_gfx.h"

const uint8_t ultimakerTextGfx[] PROGMEM = {
    128, 21, //size
    0x6,0x6,0x6,0x6,0xfe,0xfe,0xfe,0xfe,0xfc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0xfc,0xfe,0xfe,0xfe,0xfc,0x0,0x0,0x0,0xe,0xfe,0xfe,0xfe,0xfe,0x0,0x0,0xe0,
    0xfc,0xfe,0xfe,0xfc,0xe0,0xe0,0x0,0x0,0x0,0xce,0xce,0xce,0x0,0x0,0x0,0xc0,
    0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xc0,0xc0,0x80,
    0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,
    0x80,0x0,0x0,0x0,0x0,0x6,0xfe,0xfe,0xfe,0xfe,0x0,0x0,0x0,0x0,0x80,0xc0,
    0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0xc0,0xc0,0xc0,0x80,0x80,0x80,
    0x0,0x0,0x0,0x0,0xc0,0xc0,0xc0,0xc0,0x0,0x80,0xc0,0xc0,0xc0,0xc0,0x80,0x0,
    
    0x0,0x0,0x0,0x0,0x7f,0xff,0xff,0xff,0xff,0x80,0x0,0x0,0x0,0x0,0x0,0x80,
    0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0x0,
    0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0x0,0x0,0x0,0x81,
    0xf1,0xff,0xff,0x3f,0xf,0x3f,0xff,0xfc,0xf0,0xf0,0xfc,0xff,0x3f,0xf,0x3f,0xff,
    0xfe,0xf8,0x80,0x0,0x0,0x0,0xc1,0xe1,0xf1,0xf1,0x71,0x31,0x1,0x1,0x83,0xff,
    0xff,0xff,0xfc,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0xc,0x3e,0xff,0xff,0xf7,
    0xc3,0x1,0x0,0x0,0x0,0xfc,0xfe,0xff,0x87,0x3,0x11,0x31,0x31,0x33,0x3f,0x3f,
    0x3f,0x1e,0x0,0x0,0x1,0xff,0xff,0xff,0xff,0x7,0x3,0x1,0x1,0x1,0x1,0x0,

    0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x7,0x7,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
    0x7,0x7,0x7,0xf,0xf,0x6,0x0,0x0,0x0,0x7,0xf,0xf,0x7,0x0,0x0,0x0,
    0x7,0xf,0xf,0x7,0x0,0x0,0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,0x6,0xf,
    0xf,0x7,0x1,0x0,0x0,0x0,0x1,0x7,0xf,0xf,0x7,0x1,0x0,0x0,0x0,0x1,
    0x7,0xf,0xf,0x6,0x0,0x0,0x3,0x7,0xf,0xf,0xe,0xe,0x6,0x7,0x3,0x7,
    0xf,0xf,0x7,0x0,0x0,0x0,0x7,0xf,0xf,0x7,0x0,0x0,0x0,0x0,0x3,0xf,
    0xf,0xf,0x6,0x0,0x0,0x0,0x3,0x7,0x7,0xf,0xe,0xe,0xe,0xe,0xe,0xe,
    0x6,0x0,0x0,0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

const uint8_t ultimakerTextOutlineGfx[] PROGMEM = {
    128, 21,//size

    0x9,0x9,0x9,0xf9,0x1,0x1,0x1,0x1,0x3,0xfe,0x0,0x0,0x0,0x0,0x0,0xfe,
    0x3,0x1,0x1,0x1,0x3,0xfe,0x0,0x1f,0xf1,0x1,0x1,0x1,0x1,0xff,0xf0,0x1e,
    0x3,0x1,0x1,0x3,0x1e,0x10,0xf0,0x0,0xff,0x31,0x31,0x31,0xff,0x0,0xe0,0x20,
    0x20,0x20,0x20,0x20,0x20,0x60,0xc0,0x80,0x0,0x0,0x80,0xc0,0x60,0x20,0x20,0x60,
    0xc0,0x0,0x0,0x0,0x0,0xc0,0x40,0x60,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x60,
    0x40,0xc0,0x80,0x0,0xf,0xf9,0x1,0x1,0x1,0x1,0xff,0x0,0x80,0xc0,0x60,0x20,
    0x20,0x20,0xe0,0x0,0x0,0x0,0x80,0xc0,0x40,0x60,0x20,0x20,0x20,0x60,0x40,0x40,
    0xc0,0x80,0x0,0xe0,0x20,0x20,0x20,0x20,0xe0,0x60,0x20,0x20,0x20,0x20,0x60,0xc0,

    0x0,0x0,0x0,0xff,0x80,0x0,0x0,0x0,0x0,0x7f,0xc0,0x80,0x80,0x80,0xc0,0x7f,
    0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0xff,0x1,0xff,
    0x0,0x0,0x0,0x0,0xff,0x1,0x1,0x0,0xff,0x0,0x0,0x0,0xff,0x0,0xc3,0x7a,
    0xe,0x0,0x0,0xc0,0x70,0xc0,0x0,0x3,0xe,0xe,0x3,0x0,0xc0,0x70,0xc0,0x0,
    0x1,0x7,0x7c,0xc0,0x0,0xe3,0x32,0x1a,0xa,0xa,0x8a,0xca,0xfa,0xc6,0x7c,0x0,
    0x0,0x0,0x3,0xfe,0x0,0xff,0x0,0x0,0x0,0x0,0xff,0x73,0xc1,0x0,0x0,0x8,
    0x3c,0xe6,0x83,0x0,0xfe,0x3,0x1,0x0,0x78,0xfc,0xee,0x4a,0x4e,0x4c,0x40,0x40,
    0x40,0x61,0x3f,0x3,0xfe,0x0,0x0,0x0,0x0,0xf8,0xc,0x6,0x2,0x2,0x2,0x3,

    0x0,0x0,0x0,0x0,0x3,0x6,0xc,0x8,0x18,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
    0x18,0x8,0x18,0x10,0x10,0x19,0xf,0x0,0xf,0x18,0x10,0x10,0x18,0xf,0x0,0xf,
    0x18,0x10,0x10,0x18,0xf,0x0,0x0,0x0,0x1f,0x10,0x10,0x10,0x1f,0xf,0x19,0x10,
    0x10,0x18,0xe,0x3,0x0,0x3,0xe,0x18,0x10,0x10,0x18,0xe,0x3,0x0,0x3,0xe,
    0x18,0x10,0x10,0x19,0xf,0x7,0xc,0x18,0x10,0x10,0x11,0x11,0x19,0x8,0xc,0x18,
    0x10,0x10,0x18,0xf,0x0,0xf,0x18,0x10,0x10,0x18,0xf,0x0,0x1,0x7,0x1c,0x10,
    0x10,0x10,0x19,0xf,0x1,0x7,0xc,0x8,0x18,0x10,0x11,0x11,0x11,0x11,0x11,0x11,
    0x19,0xf,0x0,0x0,0x1f,0x10,0x10,0x10,0x10,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t ultimakerRobotGfx[] PROGMEM = {
    47, 64, //Size
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0x80,0xc0,
    0xe0,0xfe,0xff,0x19,0x1e,0x98,0x98,0x98,0x18,0x18,0x18,0x18,0x18,0x18,0x9e,0x9f,
    0x99,0x1e,0x38,0xf0,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0xfe,0xff,0xff,0x99,0xf1,0xe1,
    0xc3,0xff,0xff,0x0,0x0,0x63,0x63,0x63,0x60,0x60,0x60,0x60,0x60,0x60,0x63,0x63,
    0x63,0x0,0x0,0xff,0xff,0x7c,0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

    0x0,0x0,0x0,0x80,0xc0,0x60,0xb0,0xd8,0xd8,0x1c,0xfc,0xff,0x3f,0xf,0x8f,0xcf,
    0xc7,0xc7,0xc7,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,
    0xc6,0xc6,0xc6,0xc7,0xc7,0xc4,0xcc,0xc,0x1c,0xf8,0xf8,0x70,0xc0,0x0,0x0,

    0x0,0xe,0xff,0xf9,0x2a,0x2b,0x2b,0x28,0x28,0xfc,0xff,0xff,0x0,0x0,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xbf,0xb7,0x17,0xb5,0xbd,0xb5,0x0,0xb5,0xb5,0xf7,0x17,
    0xff,0xbf,0xbf,0xff,0xff,0xff,0xff,0x0,0x0,0xff,0xff,0xfc,0xff,0x7,0x0,

    0xc0,0xf0,0xff,0xff,0xfd,0xdd,0x1d,0x19,0x19,0x3f,0xff,0xff,0x0,0x0,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xfb,0xf1,0xfb,0xfb,0xea,0xee,0xc0,0xee,0xea,0xfa,0xf0,
    0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0xff,0xff,0xf,0x1f,0xf8,0xe0,

    0x0,0x3,0x7,0xf,0xf,0x1b,0x18,0x19,0xfb,0xfe,0xff,0xff,0xf0,0xe0,0xc0,0xc1,
    0xe1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf1,0xf9,0xf9,0xf9,0xf9,
    0xf9,0xf9,0x79,0x79,0x79,0xf1,0xf0,0x10,0x18,0x1f,0x7,0x6,0x3,0x3,0x0,

    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xef,0xdf,0xbf,0x7f,0xff,0xff,0xff,
    0x40,0x41,0x43,0x43,0x7f,0x21,0x20,0x20,0x21,0x7f,0xff,0xff,0xff,0x3f,0xb0,0x91,
    0xd1,0xdf,0xd0,0x50,0x58,0x1f,0x1f,0xf0,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,

    0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x7,0xf,0x1e,0x3d,0x7b,0x77,0xee,0xd1,0xde,
    0xde,0xcf,0x4b,0x4b,0x69,0x69,0x68,0x68,0x68,0x60,0x3f,0x3f,0x37,0x37,0x37,0x35,
    0x34,0x30,0x10,0x10,0x18,0x18,0x1a,0x1b,0xf,0x6,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t folderGfx[] PROGMEM = {
    16, 15,
    0xfc,0xe,0xf,0xcf,0xcf,0xcf,0xce,0xcc,0xcc,0xcc,0xcc,0xcc,0xcc,0xdc,0xc0,0xc0,
    0x7,0x70,0x7e,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0xf,0x1,
};

const uint8_t specialStartupGfx[] PROGMEM = {
    113, 32,

    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xe0,0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0x0,

    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xf8,0x80,0x0,
    0x0,0x0,0x0,0x80,0xf0,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x0,0x0,0x0,0x30,0xf8,0xf8,0xfc,0xfc,0x7e,0x7e,0x7e,0x3e,0x3e,0x3e,
    0x3e,0x7e,0x7e,0xfe,0xfe,0xfc,0xfc,0xf8,0xe0,0x80,0x0,0x0,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x0,0x0,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0x7e,0x3e,0x1e,
    0xe,0x6,0xc0,0xe0,0xf0,0xf8,0xfc,0xfc,0xfe,0x7e,0x3e,0x3e,0x3e,0x3e,0x3e,0x7e,
    0xfe,0xfc,0xfc,0xf8,0xf0,0xc0,0x80,0x0,0x0,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,
    0xfe,

    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x3,0x1f,0xff,0xff,0xff,0xff,0xff,0xfc,
    0xe0,0xe0,0xfc,0xff,0xff,0xff,0xff,0xff,0x1f,0x1,0x0,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x0,0x0,0xc0,0xe0,0xf0,0xf0,0xf8,0xf8,0xfc,0x7c,0x7c,0x3c,0x3c,0x3e,
    0x1e,0x1e,0x1e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xc0,0x80,0x0,0x0,
    0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,0x3c,
    0x3c,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    0x0,

    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x7,0x3f,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0x3f,0x7,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x0,0x0,0x3f,0x7f,0xff,0xff,0xff,0xff,0xfc,0xfc,0xf8,0xf8,0xf8,0x7c,
    0x7c,0x3c,0x3e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0x3,0x1,0x0,0x0,0x3,0x7,0x1f,0x7f,0xff,0xff,0xff,0xfe,0xfc,
    0xf0,0xe3,0x8f,0x1f,0x3f,0x3f,0x7f,0x7f,0xfe,0xfc,0xf8,0xf8,0xf0,0xf0,0xf0,0xf8,
    0xf8,0xfc,0xfc,0x7e,0x7e,0x3c,0x30,0x0,0x0,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,
    0xfe,
};

#endif//ENABLE_ULTILCD2
