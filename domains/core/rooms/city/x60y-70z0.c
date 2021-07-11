inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway" );
  set_long( "The bass rumbling sound of starship engines coming from the west loudly drowns out conversation, numbs bones over time and causes any object not securely bolted down to rattle around." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x60y-80z0.c",
  "west" : DIR+"/rooms/city/x50y-70z0.c",
  "northeast" : DIR+"/rooms/city/x70y-60z0.c"
  ]) );
}
