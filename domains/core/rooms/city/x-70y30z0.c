inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "A large rectangular viewport along the inner wall allows you a view of the generator which houses the fusion generator. The walls are curving, and they're made out of some strange mixture of granite and alloy. The corridor you are in is huge and brightly-lit.\n\nThe corridor continues to the southeast. North leads to a T-junction." );


  set_objects( 
 DIR+"/monsters/tech.c", 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-70y40z0.c",
  "southeast" : DIR+"/rooms/city/x-60y20z0.c"
  ]) );
}
