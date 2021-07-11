inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Dirty Nightclub" );
  set_long( "The only light in here appears to be ultra violet which makes all the stains on the walls and floors glow. Loud repetitive electronic mouse drowns out all other sounds and the mass of people make it so you can barely move." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x430y-650z0.c",
  "south" : DIR+"/rooms/nympho/x430y-670z0.c"
  ]) );
}
