inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor" );
  set_long( "Soft blue light comes from the blue stripes in the middle of the walls of this corridor. Otherwise, the corridor is well-lit, and you have absolutely no trouble navigating around this nice cool corridor. \n\nTo your west is the hydro generator surveillance room, while the corridor continues to your south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x60y70z-10.c",
  "west" : DIR+"/rooms/sewer/x50y80z-10.c"
  ]) );
}
