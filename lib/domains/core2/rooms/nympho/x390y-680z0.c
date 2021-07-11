inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 390);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Wide Hallway" );
  set_long( "A few plants and a couple of benches line the sides of this hallway.  The lighting is low and soft music plays from somewhere unknown, and the dark colors add to the creepy ambiance. North is a small hallway, to the east is bingo, to the west is a gift shoppe, and to the southeast is the Roxbury." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x390y-670z0.c",
  "east" : DIR+"/rooms/nympho/x400y-680z0.c",
  "west" : DIR+"/rooms/nympho/x380y-680z0.c",
  "southeast" : DIR+"/rooms/nympho/x400y-690z0.c"
  ]) );
}
