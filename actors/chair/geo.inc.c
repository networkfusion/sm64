// 0x0C0000D8
const GeoLayout haunted_chair_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chair_seg5_dl_05005190),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -7, -9, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chair_seg5_dl_05005680),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 156, -9, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chair_seg5_dl_05005408),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -3, 17, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chair_seg5_dl_05004EE8),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};
