inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "This is the southeastern corner of the incinerator. The deck you are standing on appears to be pretty hot, a condition caused by the glowingly hot incinerator and the metal walls all around you. You actually feel a little faint from all this heat. The floor below you consists totally of black impersonal metal plates. \n\nExits are to the north and west." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-40y-70z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y-80z-10.c"
  ]) );
}
