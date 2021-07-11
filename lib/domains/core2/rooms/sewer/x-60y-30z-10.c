inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The swift undercurrent beneath the surface of the sewer waters are threatening to sweep you off your feet. Somehow, something is pulling everything in the water to your southeast. You try to keep to the side of the large tunnel as much as possible, hoping that you do not get swept along with the sewage to who knows where. \n\nThe southwest primary hub is located to your southeast. The main access tunnel continues to your northwest. " );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x-70y-20z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-50y-40z-10.c"
  ]) );
}
