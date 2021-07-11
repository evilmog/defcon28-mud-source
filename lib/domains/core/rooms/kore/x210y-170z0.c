inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", -170);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "KORE North Transit" );
  set_long( "This is the mass transit area at the north side of the KORE Radio dome.\n\n%^BOLD%^South: KORE Dome Center%^RESET%^\n" );

 set_exits( ([
  "north" : DIR+"/rooms/east/x210y-100z0.c",
  "south" : DIR+"/rooms/kore/x210y-210z0.c"
  ]) );
}
