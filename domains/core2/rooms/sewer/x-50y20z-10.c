inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Dark and narrow, the waterway canal system you're in was designed to contain excess water, not allow movement through the sewers. The narrow walls, low ceiling and ankle-deep waters combine to give you a case of claustrophobia. \n\nThe waterway canal continues to the south. To the west is a main access tunnel." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-50y10z-10.c",
  "west" : DIR+"/rooms/sewer/x-60y20z-10.c"
  ]) );
}
