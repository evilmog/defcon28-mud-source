inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You are wading waist-deep in thick and smelly sewage. The lighting provided by the small lights by the sides of the tunnel isn't very helpful, but they are enough to get by. Small bubbles erupting on the surface of the sewer waters are certainly deteriorating the smell condition. \n\nA service duct lies to the north. You can continue either to the northeast or southwest to access the other main tunnels. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y30z-10.c",
  "northeast" : DIR+"/rooms/sewer/x30y30z-10.c",
  "southwest" : DIR+"/rooms/sewer/x10y10z-10.c"
  ]) );
}
