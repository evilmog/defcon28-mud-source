inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator T-junction" );
  set_long( "You are at a T-junction along the outer corridors of the taurus-shaped generator. The low hum of the generator permeates the air, sending subtle but noticeable vibrations across the cold hard floor and the walls.\n\nA small raised corridor heads north over the generator and into the central monitoring station, while to your east and west is the array of corridors which encircles the generator." );


  set_objects( 
 DIR+"/monsters/analyst.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y20z0.c",
  "east" : DIR+"/rooms/city/x-30y10z0.c",
  "west" : DIR+"/rooms/city/x-50y10z0.c"
  ]) );
}
