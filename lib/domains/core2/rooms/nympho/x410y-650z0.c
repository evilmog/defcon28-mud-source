inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Casino Ruins" );
  set_long( "Remains of broken slot machines and busted blackjack tables are all over the place. It looks like this dome has seen better days. The atmosphere here still smells of thick smoke and dead zombie. To the west lies the exit and to all other directions the carnage continues." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x410y-660z0.c",
  "west" : DIR+"/rooms/nympho/x400y-650z0.c",
  "southwest" : DIR+"/rooms/nympho/x400y-660z0.c"
  ]) );
}
