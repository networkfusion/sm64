#include <ultra64.h>

#include "config.h"

// 0x70800 bytes
#if BUGFIX_FRAMEBUFFER || defined(AVOID_UB)
u16 gFrameBuffers[3][SCREEN_WIDTH * SCREEN_HEIGHT];
#else
u16 gFrameBuffer0[SCREEN_WIDTH * SCREEN_HEIGHT];
u16 gFrameBuffer1[SCREEN_WIDTH * SCREEN_HEIGHT];
u16 gFrameBuffer2[SCREEN_WIDTH * SCREEN_HEIGHT];
#endif
