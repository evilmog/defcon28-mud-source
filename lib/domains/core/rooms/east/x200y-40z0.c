inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Service Passage" );
  set_long( "This corridor is made out of brick-layered walls and black-tiled floor. In the ceiling, a row of small turbines from north to south spins lazily, while red lights beneath them illuminate the passage. \n\nA panel in the wall leads out northwest, while the atrium service room lies to the south." );

 set_exits( ([
  "south" : DIR+"/rooms/east/x200y-50z0.c",
  "northwest" : DIR+"/rooms/east/x190y-30z0.c"
  ]) );
}
