inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Mass Transit Station: East" );
  set_long( "This is the east mass transit station within the CITY dome.\nThe following are the destinations available to you:\n\n      %^EXT_190%^East Sector %^CYAN%^....................... %^EXT_190%^east\n      %^EXT_122%^Center CITY mass transit %^CYAN%^.......... %^EXT_122%^west%^RESET%^" );

 set_exits( ([
  "east" : DIR+"/rooms/east/x110y0z0.c",
  "west" : DIR+"/rooms/city/x0y0z0.c",
  "northwest" : DIR+"/rooms/city/x90y10z0.c"
  ]) );
}
