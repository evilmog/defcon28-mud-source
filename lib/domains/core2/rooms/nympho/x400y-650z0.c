inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 400);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Entertainment District Lobby" );
  set_long( "From here you can go to any of the places in this quadrant, the casino, chapel, shops, and The Roxbury. To your south and east the casino begins, along with the other luxuries of the dome. There is also an exit to the northeast, leading back to the center of the dome." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x400y-660z0.c",
  "east" : DIR+"/rooms/nympho/x410y-650z0.c",
  "northeast" : DIR+"/rooms/nympho/x410y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x390y-660z0.c"
  ]) );
}
