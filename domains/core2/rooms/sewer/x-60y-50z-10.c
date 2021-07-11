inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sewer waters and the trash in this extensively huge tunnel appear to be rushing from your northeast to your southwest. You move by holding onto the right side of the main access tunnel, afraid of being swept off your feet to who knows where. The darkness of the tunnel is relative, with you being hardly able to see the other side of the tunnel you are in. \n\nThe southwest primary hub is to your northeast. Some kind of dividing device is to your southwest." );


  set_objects( 
 DIR+"/monsters/shelledheptosquid.c", 
 DIR+"/monsters/heptosquid.c", 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-50y-40z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-70y-60z-10.c"
  ]) );
}
