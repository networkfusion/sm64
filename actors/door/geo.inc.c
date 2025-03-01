// 0x160003A8
const GeoLayout castle_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014100),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x1600043C
const GeoLayout cabin_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013EA8),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014128),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x160004D0
const GeoLayout wooden_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014A80),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014F98),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x16000564
const GeoLayout wooden_door2_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014B30),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03015008),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x160005F8
const GeoLayout metal_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014BE0),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03015078),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x1600068C
const GeoLayout hazy_maze_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014C90),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_030150E8),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x16000720
const GeoLayout haunted_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 3500),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03014D40),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(3500, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03015158),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x160007B4
const GeoLayout castle_door_0_star_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 1000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT, door_seg3_dl_03014250),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(1000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, door_seg3_dl_03014280),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x16000868
const GeoLayout castle_door_1_star_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 1000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT, door_seg3_dl_030142B0),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(1000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, door_seg3_dl_030142E0),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x1600091C
const GeoLayout castle_door_3_stars_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 1000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT, door_seg3_dl_03014310),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(1000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, door_seg3_dl_03014340),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};

// 0x160009D0
const GeoLayout key_door_geo[] = {
   GEO_TRANSLATE_NODE(0x00, 78, 0, 0),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_OPEN_NODE(),
               GEO_RENDER_RANGE(-2048, 1000),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_OPAQUE, door_seg3_dl_03014540),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_RENDER_RANGE(1000, 32767),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, door_seg3_dl_03013E28),
                  GEO_OPEN_NODE(),
                     GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, door_seg3_dl_03014528),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};
