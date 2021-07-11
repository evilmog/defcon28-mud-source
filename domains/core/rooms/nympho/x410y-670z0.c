inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Casino Ruins" );
  set_long( "Remains of broken slot machines and busted blackjack tables are all over the place. It looks like this dome has seen better days. The atmosphere here still smells of thick smoke and dead zombie.  Nobody is having fun here any more, except evil mog because he's a jerk. The carnage continues in all directions." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x410y-660z0.c",
  "west" : DIR+"/rooms/nympho/x400y-670z0.c",
  "northwest" : DIR+"/rooms/nympho/x400y-660z0.c",
  "southwest" : DIR+"/rooms/nympho/x400y-680z0.c"
  ]) );
}
