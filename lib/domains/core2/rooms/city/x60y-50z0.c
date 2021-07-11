inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway" );
  set_long( "The bass rumbling sound of starship engines from the south makes whispered conversation impossible here. Even the light fixtures in the ceiling appear affected, rattling slightly from the engine vibrations." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x60y-40z0.c",
  "southeast" : DIR+"/rooms/city/x70y-60z0.c"
  ]) );
}
