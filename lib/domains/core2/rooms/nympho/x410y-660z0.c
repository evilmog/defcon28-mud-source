inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Casino Ruins" );
  set_long( "Remains of broken slot machines and busted blackjack tables are all over the place. It looks like this dome has seen better days. The atmosphere here still smells of thick smoke and dead zombie. You might want to get out of here fast before stuff gets weird. The carnage continues in all directions and you can hear the faint laughing of a child in the background." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x410y-650z0.c",
  "south" : DIR+"/rooms/nympho/x410y-670z0.c",
  "west" : DIR+"/rooms/nympho/x400y-660z0.c",
  "southwest" : DIR+"/rooms/nympho/x400y-670z0.c"
  ]) );
}
