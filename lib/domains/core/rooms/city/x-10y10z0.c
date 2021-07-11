inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Northwest Quadrant Entrance" );
  set_long( "Welcome to the northwest quadrant of the city dome. Some of the highlights of this quadrant are as follows: \n\n%^EXT_214%^*   %^EXT_226%^Main Fusion Generator%^CYAN%^\n\nThe central mass-transit station is to the southeast." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x-20y20z0.c",
  "southeast" : DIR+"/rooms/city/x0y0z0.c"
  ]) );
}
