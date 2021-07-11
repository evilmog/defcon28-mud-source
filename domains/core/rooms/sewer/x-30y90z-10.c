inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sewage here is warm and thick, as if the accumulated trash is somehow releasing heat. You wade along by the side of the main access tunnel, taking advantage of what little light is available to you. A mucus-like film on the surface of the muck you're in sticks to your body as you make your way across it.\n\nThe main access tunnel extends to the east and southwest." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y90z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-40y80z-10.c"
  ]) );
}
