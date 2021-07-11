inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "One of the largest tunnels ever in the City's sewer system, the main access tunnel stretches from one end to another. You wade waist-deep in the sewage, making the best of the light given by the small lights by the sides of the tunnel. The cold sewer water is cold, and the stench nauseous. \n\nYou can continue along the main access tunnel to the north and the south. A waterway canal lies to the west. " );


  set_objects( 
 DIR+"/monsters/shelledheptosquid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-10z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x40y-20z-10.c"
  ]) );
}
