inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 400);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Casino Ruins" );
  set_long( "Broken video poker machines are all over the place. Blood is stained into the carpet and the walls are covered in grime. The place smells like stale smoke and bad decisions. You hear zombies in the distance." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x400y-660z0.c",
  "south" : DIR+"/rooms/nympho/x400y-680z0.c",
  "east" : DIR+"/rooms/nympho/x410y-670z0.c",
  "west" : DIR+"/rooms/nympho/x390y-670z0.c",
  "northeast" : DIR+"/rooms/nympho/x410y-660z0.c"
  ]) );
}
