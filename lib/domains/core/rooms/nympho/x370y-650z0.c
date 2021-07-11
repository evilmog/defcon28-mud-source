inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 370);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "A small lobby" );
  set_long( "This is a small lobby, with hallways and doors along all sides. broken benches, plants and trees give this place the just destroyed by a zombie apocalpyse vibe. Creepy circus music seems to be coming from somewhere further adding to the creep factor. Blood smears are all over the walls. To the northwest is more carnage. The exit is to the southeast." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x370y-640z0.c",
  "west" : DIR+"/rooms/nympho/x360y-650z0.c",
  "northwest" : DIR+"/rooms/nympho/x360y-640z0.c",
  "southeast" : DIR+"/rooms/nympho/x380y-660z0.c"
  ]) );
}
