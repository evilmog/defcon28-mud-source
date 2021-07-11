inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator T-junction" );
  set_long( "This T-junction is just one of four which links all the the corridors in the outer loop to the central monitoring station. The entire place seems to be vibrating slightly, due to the low hum of the fusion generator." );


  set_objects( 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-10y50z0.c",
  "south" : DIR+"/rooms/city/x-10y30z0.c",
  "west" : DIR+"/rooms/city/x-20y40z0.c"
  ]) );
}
