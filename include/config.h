#ifndef CONFIG_H
#define CONFIG_H

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings
 * (maybe eventually) in SM64
 */

// Bug Fixes
// --| US Version Nintendo Bug Fixes
/// Fixes bug where obtaining over 999 coins sets the number of lives to 999 (or -25)
#define BUGFIX_MAX_LIVES (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// Fixes bug where the Boss music won't fade out after defeating King Bob-omb
#define BUGFIX_KING_BOB_OMB_FADE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// Fixes bug in Bob-Omb Battlefield where entering a warp stops the Koopa race music
#define BUGFIX_KOOPA_RACE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// Fixes bug where Piranha Plants do not reset their action state when the
/// player exits their activation radius.
#define BUGFIX_PIRANHA_PLANT_STATE_RESET (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// Fixes bug where sleeping Piranha Plants damage players that bump into them
#define BUGFIX_PIRANHA_PLANT_SLEEP_DAMAGE (0 || VERSION_US || VERSION_SH || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
/// Fixes bug where it shows a star when you grab a key in bowser battle stages
#define BUGFIX_STAR_BOWSER_KEY (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)

// --| Shindou Version Nintendo Bug Fixes
/// BLJ (Backwards Long Jump) speed build up fix, crushing SimpleFlips's dreams since July 1997
#define BUGFIX_BACKWARDS_LONGJUMP (0 || VERSION_SH) //most people probably wont like this in any other build!
#define BUGFIX_CONTROLLABLE_PLATFORM (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
#define FEATURE_FACE_EASTER_EGG (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)

// --| EU Version Bug Fixes
/// This fixes Wiggler reading UB on his first frame of his acceleration, as his health is not set.
#define BUGFIX_WIGGLER_HEALTH (0 || VERSION_EU || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_SH_ULTIMATE)

// --| Ultimate Version Bug Fixes
/// Fixes bug where it shows burn smoke incorrectly
#define BUGFIX_BURN_SMOKE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_TUXIE_HELD_STATE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_CASTLE_TRAP_OPEN_SOUND (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_BULLY_KNOCKBACK_TIMER (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_SHADOW_WATERLEVEL (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_COLLISION_HITBOX_OVERLAP (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_COLLISION_HURTBOX_OVERLAP (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_SHELL_BACKWARDS_HYPERSPEED (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_MARIO_CRAWLING_FALLTHROUGH (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_AIR_HIT_WALL_VELOCITY (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_AIR_HIT_WALL_ANIMATION (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_CAMERA_WATER_HEIGHT (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_CAMERA_BOSS_FIGHT_HEIGHT (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_KOOPA_PINK_SHORTS (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_AUDIO_LOAD_BANK_NOT_SEQUENCE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)

// These are less bugfixes, but more re-adding missing features.
#define BUGFIX_USE_KLEPTO_STAR_ANIMATION (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_USE_CRACKED_ICE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
#define BUGFIX_USE_PYRAMID_EXPLODE_CUTSCENE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)


// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// Border Height Define for NTSC Versions
#ifdef TARGET_N64
#ifndef VERSION_EU
#define BORDER_HEIGHT 8
#else
#define BORDER_HEIGHT 1
#endif
#else
// What's the point of having a border?
#define BORDER_HEIGHT 0
#endif

#endif // CONFIG_H
