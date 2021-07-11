inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 370);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Candy Shoppe Ruins" );
  set_long( "The nasty smell of brains, blood and guts fill this room. The walls and floors are covered with a mixture of blood, dirt, and grime. The display racks that once held candy are no more. You can hear creepy circus music coming from an unknown direction." );

 set_exits( ([
  "northeast" : DIR+"/rooms/nympho/x380y-660z0.c"
  ]) );
}
