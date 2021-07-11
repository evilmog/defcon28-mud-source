inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Southwest Quadrant Entrance" );
  set_long( "Welcome to the southwest quadrant of the city dome. Some of the highlights of this quadrant are as follows:\n\n%^EXT_105%^*   %^EXT_122%^Shopping District\n%^EXT_105%^*%^EXT_122%^   Company Human Resources Department\n%^EXT_105%^*   %^EXT_122%^Company Accounting Services\n%^EXT_105%^*   %^EXT_122%^Company Corporation Registry\n%^EXT_105%^*   %^EXT_122%^CITY Director's Office\n%^EXT_214%^*   %^EXT_122%^Maintenance Airlock%^CYAN%^\n\nThe center mass transit station is to the northeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/city/x0y0z0.c",
  "southwest" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
