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
/// Fixes bug in KTQ win dialog which makes it sounds like a penguin instead of a Koopa
#define BUGFIX_DIALOG_SOUND_KTQ_WIN (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// TODO: add comment!
#define BUGFIX_HOLDING_POLE (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)
/// TODO: add comment!
#define BUGFIX_SOUND_MARIO_OOOF (0 || VERSION_US || VERSION_EU || VERSION_SH || VERSION_JP_ULTIMATE)


// --| Shindou Version Nintendo Bug Fixes
/// BLJ (Backwards Long Jump) speed build up fix, crushing SimpleFlips's dreams since July 1997
#define BUGFIX_BACKWARDS_LONGJUMP (0 || (VERSION_SH && !VERSION_SH_ULTIMATE)) //most people probably wont like this in any other build!
/// Fixes bug where standing a controllable platform in HMC be invisible while it blinks
#define BUGFIX_CONTROLLABLE_PLATFORM (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
/// Fixes bug where the angle speed isn't preserved while in a pole
#define BUGFIX_POLE_INTERACTION_FORWARD_VELOCITY (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
/// Adds the multiple face title screen easter egg
#define FEATURE_FACE_EASTER_EGG (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
/// TODO: Some RumblePak functions might still be defined explicitly, including linker file.
#define FEATURE_RUMBLE_PAK_SUPPORT (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)
/// TODO: Some functions might still be defined explicitly.
#define FEATURE_RUMBLE_PAK_TITLE_GRAPHIC (0 || VERSION_SH || VERSION_US_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_JP_ULTIMATE)

// --| EU Version Bug Fixes
/// This fixes Wiggler reading UB on his first frame of his acceleration, as his health is not set.
#define BUGFIX_WIGGLER_HEALTH (0 || VERSION_EU || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_SH_ULTIMATE)
/// This allows the Z button to perform an action in various menus
#define FEATURE_Z_BUTTON_MENU_ACTION (0 || VERSION_EU || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_SH_ULTIMATE)
/// This stops you from slow climbing up ledges while holding A.
#define BUGFIX_NO_SLOW_CLIMB_LEDGES_A_BUTTON (0 || VERSION_EU)
/// Beta Key was removed by EU, so glyph slot reused.
/// This produces a colorful Ü.
#define TRANSLATION_EU_GLYPH_BETA_KEY (0 || VERSION_EU)
/// Various fixes required for supporting multiple languages
#define TRANSLATION_EU_TEXT_SUPPORT (0 || VERSION_EU)

// --| Ultimate Version Bug Fixes
/// Fixes bug where it shows burn smoke incorrectly
#define BUGFIX_BURN_SMOKE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct
/// Fixes an oddly defined interaction sub type in penguin mother behavior
#define BUGFIX_TUXIE_HELD_STATE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes bug where the castle trap sound in the entrance of Bowser 1 doesn't play
#define BUGFIX_CASTLE_TRAP_OPEN_SOUND (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes Bully minion knockback timer by reseting it, more info in the fix itself
#define BUGFIX_BULLY_KNOCKBACK_TIMER (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct
/// Fixes Shadow water height level return code
#define BUGFIX_SHADOW_WATERLEVEL (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes last missing return in hitbox overlap detection code
#define BUGFIX_COLLISION_HITBOX_OVERLAP (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct.
/// Fixes last missing return in hurtbox overlap detection code
#define BUGFIX_COLLISION_HURTBOX_OVERLAP (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct.
/// Fixes no backward speed cap (shell hyperspeed)
#define BUGFIX_SHELL_BACKWARDS_HYPERSPEED (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes wall fallthrough when mario is crawling
#define BUGFIX_MARIO_CRAWLING_FALLTHROUGH (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// TODO: add comment!
#define BUGFIX_AIR_HIT_WALL_VELOCITY (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct
/// TODO: add comment!
#define BUGFIX_AIR_HIT_WALL_ANIMATION (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes camera height in water while being metal mario
#define BUGFIX_CAMERA_WATER_HEIGHT (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes camera height in BOB and adds missing breaks in code
#define BUGFIX_CAMERA_BOSS_FIGHT_HEIGHT (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes Koopa's pink shorts caused by a miscalled light value
#define BUGFIX_KOOPA_PINK_SHORTS (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct
/// Fixes audio code preload sequence so it checks sequences instead of banks
#define BUGFIX_AUDIO_LOAD_SEQUENCE_NOT_BANK (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Corrects the first word of Yoshi's dialogue
#define BUGFIX_YOSHI_DIALOG (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //verified correct
/// Fixes object counter so it correctly gets proper value when updating objects
#define BUGFIX_SURFACE_OBJECT_COUNTER (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// TODO: add comment!
#define BUGFIX_CUTSCENE_LOOP (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// TODO: add comment!
#define BUGFIX_RESOLVE_OBJECT_COLLISIONS 0 // TODO: fixme, Fixing the atan2s actually causes more issues than it helps. In my own fix I ended up having to rewrite the entire function lol
/// Fixes open door key cutscene on 90-270 degrees
#define BUGFIX_DOOR_KEY_CUTSCENE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes cap cloning when Mario takes a fade warp
#define BUGFIX_HAT_CLONE_FADE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes completed course not giving extra lives every 50 coins after 150 coins
#define BUGFIX_COURSE_COMPLETE_50_COINS (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes drowing sound continously playing while metal mario
#define BUGFIX_DROWING_SOUND_METAL (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes turn circle when starting to move
#define BUGFIX_TURN_CIRCLE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes fake pole grab on the bottom of it, allowing to be grabbed anywhere
#define BUGFIX_POLE_BOTTOM_GRAB (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //TODO: fixme, starts mario higher up on the pole than it should.
/// Fixes missing sounds in key exit cutscene caused by missing "break"s in code
#define BUGFIX_MISSING_SOUNDS_KEY_EXIT_BREAK (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes duplicated red/white display list in goddard and properly uses the next ones
#define BUGFIX_DUPPLICATED_RED_SPARKLE_GD_DL (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Fixes or rather align manta's water rings to match where it looks
#define BUGFIX_ALIGN_WATER_RING (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //TODO: fixme, or at least test the change is valid.
/// Fixes impossible coins (also fixes impossible goomba since it's related)
#define BUGFIX_IMPOSSIBLE_COINS (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) // TODO: test the change is valid.
/// Corrects hud texture fillter, only noticeable on N64 old plugins
#define BUGFIX_HUD_TEXTURE_FILTER (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) // TODO: test the change is valid. Possibily should be split into 2 and added to the rom bugfixes.
/// Removes extra close tags from GEO_NODEs
#define BUGFIX_GEO_NODE_CLOSE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// No return statement was specified, despite return value being used. Goddard lucked out that `v0` return from alloc_displaylist() 
/// is not overwriten, as that pointer is what should be returned. (Un-necessary if using AVOID_UB)
#define BUGFIX_GODDARD_DISPLAYLIST_RETURN (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) // Verified original fix
/// Pointer casting is technically UB, and avoiding it gets rid of endian issues as well as a nice side effect.
#define BUGFIX_POINTER_CAST_AND_ENDIAN (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) // Verified original fix

// --| Ultimate Version resurrection of lost features
/// Correctly changes blue star model when Klepto is holding it (First star in SSL)
#define RESURRECT_KLEPTO_STAR_ANIMATION (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Adds unused cracked ice object in SL
/// More information in 'unused_poundable_platform.inc.c' comment
#define RESURRECT_CRACKED_ICE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Properly adds unused SSL Pyramid cutscene after standing on the 4 pillars
#define RESURRECT_PYRAMID_EXPLODE_CUTSCENE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //TODO: verify fix.
/// Changes how Mario grabs a star/key by calling his interactObj define
/// This also makes it so a blue star is shown when grabbing it
#define RESURRECT_PROPER_SHOW_COLLECTABLE (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)
/// Adds unused sad eyes for the penguin mother when he lost it's baby
#define RESURRECT_TUXIES_MOTHER_SAD_EYES (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE) //TODO: verify fix.
/// Adds more actions to the special triple jump such as wallkick and grabbing
#define RESURRECT_MORE_SPECIAL_TRIPLE_JUMP_ACTIONS (0 || VERSION_US_ULTIMATE || VERSION_JP_ULTIMATE || VERSION_EU_ULTIMATE || VERSION_SH_ULTIMATE)

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
