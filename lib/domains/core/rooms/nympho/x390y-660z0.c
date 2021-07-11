inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 390);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "A Small Lobby" );
  set_long( "This is a small lobby, with hallways and doors along all sides. A few benches, plants and small trees give the place an open atmosphere, and the soothing music that comes out of nowhere creeps you right out. To the west and south are a few shops to show someone how much you dislike them, The Roxbury is also this direction. To the north is the chapel, and to the east is the casino. The exit is to the northeast." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x390y-650z0.c",
  "south" : DIR+"/rooms/nympho/x390y-670z0.c",
  "east" : DIR+"/rooms/nympho/x400y-660z0.c",
  "west" : DIR+"/rooms/nympho/x380y-660z0.c",
  "northeast" : DIR+"/rooms/nympho/x400y-650z0.c"
  ]) );
}
