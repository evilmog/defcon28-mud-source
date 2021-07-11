inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 670);
  set_property("z", 0);

  add_area( "northmine" );
  set_short( "North Mine - Northern Transit Station" );
  set_long( "No domes exist north of this point, although a mass-transit station has been built here to accommodate future growth." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/northmine/x0y630z0.c",
  "southeast" : DIR+"/rooms/northmine/x10y660z0.c"
  ]) );
}
