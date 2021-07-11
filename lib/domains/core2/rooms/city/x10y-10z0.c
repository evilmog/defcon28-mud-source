inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Southeast Quadrant Entrance" );
  set_long( "Welcome to the southeast quadrant of the city dome. Some of the highlights of this quadrant are as follows:\n\n* Vice Presidents Grey and Duchie's offices.\n* Shay Park\n* Core Starport\n* Various Administrative Offices\n* The Company Conference Room\n\nThe center mass transit station is to the northwest." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x0y0z0.c",
  "southeast" : DIR+"/rooms/city/x20y-20z0.c"
  ]) );
}
