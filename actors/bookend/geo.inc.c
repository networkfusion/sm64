// 0x0C000000
const GeoLayout bookend_part_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_05001F98),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_05001B20),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_05002140),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_05001D68),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_05001978),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, bookend_seg5_dl_050022E0),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
#if !BUGFIX_GEO_NODE_CLOSE
GEO_CLOSE_NODE(), //! more close than open nodes
#endif
GEO_END(),
};
