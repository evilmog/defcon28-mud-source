inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway" );
  set_long( "The bass rumbling sound of starship engines from the southwest makes normal conversation difficult here without raising one's voice. Numerous scratches and scuffle marks on the floor indicate frequent traffic in and out of the shops to the south and east." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x70y-70z0.c",
  "east" : DIR+"/rooms/city/x80y-60z0.c",
  "northwest" : DIR+"/rooms/city/x60y-50z0.c",
  "southwest" : DIR+"/rooms/city/x60y-70z0.c"
  ]) );
}
