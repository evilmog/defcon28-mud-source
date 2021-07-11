inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "It is dark here, and the slow-moving muck you're wading in is not helping things one bit. This is a very enclosed space you are in, one of the City sewers overfill buffers just in case the water level rise too high. You hope it doesn't rise while you're still in the canal.\n\nThe waterway canal extends to the north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y40z-10.c",
  "south" : DIR+"/rooms/sewer/x10y20z-10.c"
  ]) );
}
