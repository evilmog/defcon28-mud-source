inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You can hear the air being sucked out of the atrium by the vents on wall. The large fern-like plants rustle slightly as the pressure of the suction affect them a little. There are no echoes here, only the quiet crunching of the dark earth beneath you as you walk along the earthen path.\n\nExits are to the southeast and southwest." );


  set_objects( 
 DIR+"/monsters/tangleweed.c", 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x30y-70z-20.c",
  "southwest" : DIR+"/rooms/sewer/x10y-70z-20.c"
  ]) );
}
