inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Claustrophobia peeks at the edges of your mind as you traverse this extremely narrow waterway canal. The ceiling causes you to bend your back, while the narrow walls force you to move sideways instead of forwardwise.\n\nYou may continue to the east and west in the waterway canal system." );


  set_objects( 
 DIR+"/monsters/greensnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y-10z-10.c"
  ]) );
}
