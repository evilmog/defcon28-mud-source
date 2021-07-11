inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 100);
  set_property("z", 0);

  add_area( "core" );
  set_short( "CITY Mass Transit Station: North" );
  set_long( "This is the north mass transit station within the CITY dome. The following are the destinations available to you:\n\n   North Sector ..................... north\n   Center CITY mass transit ......... south\n\nAlternatively, there is a passage which branches off to your southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/core/x0y110z0.c",
  "south" : DIR+"/rooms/core/x0y0z0.c",
  "southeast" : DIR+"/rooms/core/x10y90z0.c",
  "southwest" : DIR+"/rooms/core/x-10y90z0.c"
  ]) );
}
