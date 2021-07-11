inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The wide span of the main access tunnel allows a high amount of sewage to pass through it, but instead of making progress easier for you, you find that wading through thick smelly sludge in near zero visibility isn't exactly child's play. You can only be thankful for the soaringly high ceiling, which you know at least allow the smell coming from the dark waters beneath you to dissipate further. \n\n   Main access tunnels continue to your northeast and southwest. The end of a big pipe juts out from the northern wall." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/shelledheptosquid.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-60y10z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-80y-10z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-70y10z-10.c",
  ]) );
}
