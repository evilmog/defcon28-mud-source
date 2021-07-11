inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "Blue stripes run along the entire length of this corridor. You can differentiate this corridor with other domes by the stripes which mark it out as uniquely East Dome.\n\nThe domes maintenance office is to your south. Corridors extend to your north and east." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x220y-20z0.c",
  "south" : DIR+"/rooms/east/x220y-40z0.c",
  "east" : DIR+"/rooms/east/x230y-30z0.c"
  ]) );
}
