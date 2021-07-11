inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -100);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Mass Transit Station: South" );
  set_long( "This is the south mass transit station within the CITY dome. The following are the destinations available to you:\n\n      %^EXT_201%^South Sector %^CYAN%^..................... %^EXT_201%^south\n      %^EXT_122%^Center CITY mass transit %^CYAN%^......... %^EXT_122%^north%^CYAN%^" );

 set_exits( ([
  "north" : DIR+"/rooms/city/x0y0z0.c",
  "south" : DIR+"/rooms/south/x0y-110z0.c"
  ]) );
}
