inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 250);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Housing Hallway" );
  set_long( "This is a generic hallway, rapidly put here because evilmog forgot this section is largely unfinished, oops. The walls are boring, the floor is boring, nobody cares." );

 set_exits( ([
  "south" : DIR+"/rooms/east/x250y-30z0.c",
  "west" : DIR+"/rooms/east/x240y-20z0.c"
  ]) );
}
