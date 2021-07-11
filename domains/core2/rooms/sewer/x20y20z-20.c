inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "You splosh around a bit as you move across the lake. Ripples move in circular motion away from you, disappearing into the darker areas of the lake. Support pillars are far and few, yet they seem to loom ominously in the pseudo-darkness, as if able to conceal some sort underwater creature. \n\nYou may continue sploshing in the lake by heading east or west." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y20z-20.c",
  "west" : DIR+"/rooms/sewer/x10y20z-20.c"
  ]) );
}
