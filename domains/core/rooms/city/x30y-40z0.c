inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "Tall grasses come up nearly to your shoulders, making your head look as if it is levitating as you move along the narrow stone path. To the north you can see lush green plants. It appears much drier to the south." );


  set_objects( 
 DIR+"/monsters/ferret.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x30y-30z0.c",
  "south" : DIR+"/rooms/city/x30y-50z0.c",
  "northeast" : DIR+"/rooms/city/x40y-30z0.c"
  ]) );
}
