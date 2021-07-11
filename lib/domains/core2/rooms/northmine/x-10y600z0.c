inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 600);
  set_property("z", 0);

  add_area( "northmine" );
  set_short( "Guard Barracks" );
  set_long( "Here is where the off-duty guards take their rest.  The lighting is pleasant and subdued, and the furniture is quite comfortable.  The guards look up at you in surprise as you enter." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/northmine/x0y590z0.c"
  ]) );
}
