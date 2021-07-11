inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Park Entrance" );
  set_long( "This park is very lush but looks to be overgrown, as if the gardening drones have abandoned this place. Vines and creepers are all over and random plants seem to be growing out of every crevice. It is also extremely humid as if somebody hacked into the climate controls." );


  set_objects( 
 DIR+"/monsters/fern.c", 
 DIR+"/monsters/fireant.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x70y-30z0.c",
  "south" : DIR+"/rooms/city/x70y-50z0.c",
  "east" : DIR+"/rooms/city/x80y-40z0.c",
  "west" : DIR+"/rooms/city/x60y-40z0.c"
  ]) );
}
