inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "The unstable bed of the lake shifts uncertainly beneath you as you make your way across the lake. The water is cold and chilly, but moving around keeps you relatively warm. Illumination high above you lights your way in this dark lonely lake.\n\n   To your north you spy a dry spot of land. The lake continues to your east and northeast." );


  set_objects( 
 DIR+"/monsters/blob.c", 
 DIR+"/monsters/blob.c", 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y30z-20.c",
  "east" : DIR+"/rooms/sewer/x20y20z-20.c",
  "northeast" : DIR+"/rooms/sewer/x20y30z-20.c"
  ]) );
}
