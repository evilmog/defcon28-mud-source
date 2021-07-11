inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 360);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Mud Wrestling" );
  set_long( "A huge pit in the middle of the room is filled to the top with mud.  The dirty, stained rope railing around the edge of the pit keeps the wrestlers from invading the small metal benches that seem to radiate from the pit." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x360y-640z0.c",
  "east" : DIR+"/rooms/nympho/x370y-650z0.c",
  "northeast" : DIR+"/rooms/nympho/x370y-640z0.c"
  ]) );
}
