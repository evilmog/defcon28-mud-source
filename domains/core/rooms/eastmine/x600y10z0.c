inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 600);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "eastmine" );
  set_short( "Guard Barracks" );
  set_long( "Here is where the off-duty guards take their rest.  The lighting is pleasant and subdued, and the furniture is quite comfortable.  The guards look up at you in surprise as you enter." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/eastmine/x590y0z0.c"
  ]) );
}
