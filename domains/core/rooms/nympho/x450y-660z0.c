inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 450);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Center Stage" );
  set_long( "There is an array of dancers in cages and on poles to entertain the VIP's. The music is softer here so you can have a proper conversation. The lighting is soft and subdued as well." );


  set_objects( 
 DIR+"/monsters/poledancer.c", 
 DIR+"/monsters/cagedancer.c", 
 DIR+"/monsters/poledancer.c", 
 DIR+"/monsters/cagedancer.c", 
 DIR+"/monsters/poledancer.c", 
 DIR+"/monsters/cagedancer.c", 
 DIR+"/monsters/poledancer.c", 
 DIR+"/monsters/cagedancer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x450y-650z0.c",
  "west" : DIR+"/rooms/nympho/x440y-660z0.c",
  "northeast" : DIR+"/rooms/nympho/x460y-650z0.c",
  "southeast" : DIR+"/rooms/nympho/x460y-670z0.c",
  "southwest" : DIR+"/rooms/nympho/x440y-670z0.c"
  ]) );
}
