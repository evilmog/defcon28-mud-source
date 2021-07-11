inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 390);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Wide Hallway" );
  set_long( "A few plants and a couple of benches line the sides of this hallway.  Soft music plays from an indeterminate source.  The lighting is low and the gentle colors enhance the pleasant ambience.  Just to the west is the Jewelry Shoppe, to the east is the Casino, while the hallway continues north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x390y-660z0.c",
  "south" : DIR+"/rooms/nympho/x390y-680z0.c",
  "east" : DIR+"/rooms/nympho/x400y-670z0.c",
  "west" : DIR+"/rooms/nympho/x380y-670z0.c"
  ]) );
}
