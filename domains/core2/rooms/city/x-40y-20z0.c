inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor: Company Accounting Services" );
  set_long( "This is the main corridor of the southwestern quadrant of the city dome. To the north, an access panel leads to the Accounts Payables department.\n\nThis corridor seems to continue infinitely to the east and west. The Company Mailroom is to the south. " );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y-10z0.c",
  "south" : DIR+"/rooms/city/x-40y-30z0.c",
  "east" : DIR+"/rooms/city/x-30y-20z0.c",
  "west" : DIR+"/rooms/city/x-50y-20z0.c"
  ]) );
}
