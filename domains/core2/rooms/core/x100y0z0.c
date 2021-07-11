inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "core" );
  set_short( "CITY Mass Transit Station: East" );
  set_long( "This is the east mass transit station within the CITY dome.\nThe following are the destinations available to you:\n\n      East Sector ....................... east\n      Center CITY mass transit .......... west" );

 set_exits( ([
  "east" : DIR+"/rooms/core/x110y0z0.c",
  "west" : DIR+"/rooms/core/x0y0z0.c",
  "northwest" : DIR+"/rooms/core/x90y10z0.c"
  ]) );
}
