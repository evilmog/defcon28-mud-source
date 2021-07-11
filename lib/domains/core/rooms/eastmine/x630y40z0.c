inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 630);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "eastmine" );
  set_short( "East Mine - N Transit" );
  set_long( "No domes exist north of this point, although a mass-transit station has been built here to accommodate future growth." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/eastmine/x630y0z0.c",
  "southeast" : DIR+"/rooms/eastmine/x640y30z0.c"
  ]) );
}
