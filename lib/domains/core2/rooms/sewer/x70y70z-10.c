inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You are standing at the end of the main access tunnel. Here, the sewage is visibly higher, rising right up to your chest. However it is also brighter here, the small lights by the sides of the tunnel being complemented by two large light panels on the ceiling." );


  set_objects( 
 DIR+"/monsters/log.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x70y60z-10.c",
  "southwest" : DIR+"/rooms/sewer/x60y60z-10.c"
  ]) );
}
