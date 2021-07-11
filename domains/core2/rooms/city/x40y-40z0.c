inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Fountain" );
  set_long( "A huge fountain is the center piece of this area, and of this entire park. The brickwork around the fountain is laid in the design of an ancient Earth compass. A small path leads off from several of these brick points. Water is perpetually recycled through the fountain, rising in a large umbrella shower that gurgles and patters into the pool lined by a low wall.\n\nA small plaque is mounted near the fountain." );


  set_objects( 
 DIR+"/monsters/carrierpigeon.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x50y-40z0.c",
  "northeast" : DIR+"/rooms/city/x50y-30z0.c",
  "southwest" : DIR+"/rooms/city/x30y-50z0.c"
  ]) );
}
