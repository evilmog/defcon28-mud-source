inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway: North End" );
  set_long( "The low bass rumbling sound of starship engines is quieter here than further south. A surprising feeling of moist air blows in from an atrium to the west." );


  set_objects( 
 DIR+"/monsters/lrak.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x60y-30z0.c",
  "south" : DIR+"/rooms/city/x60y-50z0.c",
  "east" : DIR+"/rooms/city/x70y-40z0.c",
  "west" : DIR+"/rooms/city/x50y-40z0.c"
  ]) );
}
