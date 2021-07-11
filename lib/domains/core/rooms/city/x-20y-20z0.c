inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor" );
  set_long( "This is the main corridor of the southwestern quadrant of the city dome.  To the north, an access panel leads to the Office of the Paymaster.\n\nThe corridor seems to continue infinitely to the west and south.  The quadrant exit to the northeast will lead you to the central mass transit station." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y-10z0.c",
  "south" : DIR+"/rooms/city/x-20y-30z0.c",
  "east" : DIR+"/rooms/city/x-10y-20z0.c",
  "west" : DIR+"/rooms/city/x-30y-20z0.c",
  "northeast" : DIR+"/rooms/city/x-10y-10z0.c",
  "down" : DIR+"/rooms/sewer/x-20y-20z-10.c"
  ]) );
}
