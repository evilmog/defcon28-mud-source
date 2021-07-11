inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -630);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Western Transit Station" );
  set_long( "This is the south mine west transit tube. Its not hooked up to anything. Mostly because I'm lazy, thats it I'm lazy and there's nothing you can do about it." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/southmine/x0y-630z0.c",
  "northeast" : DIR+"/rooms/southmine/x-30y-620z0.c"
  ]) );
}
