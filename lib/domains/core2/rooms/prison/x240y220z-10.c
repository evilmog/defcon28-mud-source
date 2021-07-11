inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", 220);
  set_property("z", -10);

  add_area( "prison" );
  set_short( "CITY Detention Center - Holding Cell" );
  set_long( "This is the holding cell's shower room.  Just be careful not to drop the soap while cleaning yourself up.  The bail panel has been positioned in the small room north of here." );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x240y230z-10.c",
  "up" : DIR+"/rooms/prison/x240y220z0.c"
  ]) );
}
