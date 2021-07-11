inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Southeast Quadrant Entrance" );
  set_long( "Welcome to the southeast quadrant of the city dome. Some of the highlights of this quadrant are as follows:\n\n%^EXT_122%^* %^EXT_105%^Vice Presidents Grey and Duchie's offices.\n%^EXT_122%^* %^EXT_105%^Shay Park\n%^EXT_122%^* %^EXT_105%^Core Starport\n%^EXT_122%^* %^EXT_105%^Various Administrative Offices\n%^EXT_122%^* %^EXT_105%^The Company Conference Room%^CYAN%^\n\nThe center mass transit station is to the northwest." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x0y0z0.c",
  "southeast" : DIR+"/rooms/city/x20y-20z0.c"
  ]) );
}
