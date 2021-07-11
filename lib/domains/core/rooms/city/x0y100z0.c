inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 100);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Mass Transit Station: North" );
  set_long( "This is the north mass transit station within the CITY dome. The following are the destinations available to you:\n\n   %^EXT_46%^North Sector %^CYAN%^..................... %^EXT_46%^north\n   %^EXT_122%^Center CITY mass transit %^CYAN%^......... %^EXT_122%^south\n\n%^CYAN%^Alternatively, there is a passage which branches off to your southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x0y110z0.c",
  "south" : DIR+"/rooms/city/x0y0z0.c",
  "southeast" : DIR+"/rooms/city/x10y90z0.c",
  "southwest" : DIR+"/rooms/city/x-10y90z0.c"
  ]) );
}
