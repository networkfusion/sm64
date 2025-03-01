// 0x0E000660
const GeoLayout castle_grounds_geo_000660[] = {
   GEO_CULLING_RADIUS(1000),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 24576),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, castle_grounds_seg7_dl_0700C768),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 459, 0, 0, castle_grounds_seg7_dl_0700C728),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 460, 0, 0, castle_grounds_seg7_dl_0700C6E8),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 345, 0, 0, castle_grounds_seg7_dl_0700C6A8),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 287, 0, 0, castle_grounds_seg7_dl_0700C670),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
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
