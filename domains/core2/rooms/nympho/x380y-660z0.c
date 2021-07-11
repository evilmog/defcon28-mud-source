inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 380);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Wide Hallway" );
  set_long( "A few plants and a couple of benches line the sides of this hallway.  The lighting is low and creepy music plays from somewhere unknown, and the dark colors add to the creepy mood. North is the courthouse and to the south is a jewelers, and to the east and west hallway continues." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x380y-650z0.c",
  "south" : DIR+"/rooms/nympho/x380y-670z0.c",
  "east" : DIR+"/rooms/nympho/x390y-660z0.c",
  "west" : DIR+"/rooms/nympho/x370y-660z0.c",
  "northwest" : DIR+"/rooms/nympho/x370y-650z0.c",
  "southwest" : DIR+"/rooms/nympho/x370y-670z0.c"
  ]) );
}
