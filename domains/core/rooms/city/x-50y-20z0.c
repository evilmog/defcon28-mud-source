inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor: Company Accounting Services" );
  set_long( "This is the main corridor of the southwestern quadrant of the city dome. To the north, an access panel leads to the Office of Records.\n\nThis corridor seems to continue infinitely to the east and west. A corridor leading to an outside airlock and the City Ore Warehouse is south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-10z0.c",
  "south" : DIR+"/rooms/city/x-50y-30z0.c",
  "east" : DIR+"/rooms/city/x-40y-20z0.c",
  "west" : DIR+"/rooms/city/x-60y-20z0.c"
  ]) );
}
