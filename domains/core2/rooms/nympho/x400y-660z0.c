inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 400);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Casino Ruins" );
  set_long( "Remains of broken slot machines and busted blackjack tables are all over the place. It looks like this dome has seen better days. The atmosphere here still smells of thick smoke and dead zombie. To the west is a small hallway leading to more shenanigans." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x400y-650z0.c",
  "south" : DIR+"/rooms/nympho/x400y-670z0.c",
  "east" : DIR+"/rooms/nympho/x410y-660z0.c",
  "west" : DIR+"/rooms/nympho/x390y-660z0.c",
  "northeast" : DIR+"/rooms/nympho/x410y-650z0.c",
  "southeast" : DIR+"/rooms/nympho/x410y-670z0.c"
  ]) );
}
