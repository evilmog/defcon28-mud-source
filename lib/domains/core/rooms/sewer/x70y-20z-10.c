inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Rats Lair" );
  set_long( "You stand in the middle of a room which appears to have been taken over by rats. Rodents of all sizes run around you, oblivious to your presence as they squeak around excitedly. A small pool of water is in the middle of the room, while a weird looking nest of sorts is located in a far corner of the room.\n\nA solitary large pipe which juts out from the wall appears to be the only exit out." );


  set_objects( 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/warrior.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/sewer/x60y-30z-10.c"
  ]) );
}
