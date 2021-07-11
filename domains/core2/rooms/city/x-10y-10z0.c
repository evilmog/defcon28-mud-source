inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Southwest Quadrant Entrance" );
  set_long( "Welcome to the southwest quadrant of the city dome. Some of the highlights of this quadrant are as follows:\n\n*   Shopping District\n*   Company Human Resources Department\n*   Company Accounting Services\n*   Company Corporation Registry\n*   CITY Director's Office\n*   Maintenance Airlock\n\nThe center mass transit station is to the northeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/city/x0y0z0.c",
  "southwest" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
