inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Warm sewage surrounds you with both its uncomfortable dampness and its horrible stench. You hardly breath as you wade along this huge main access tunnel, trying not to get lost in its infinite twists and turns. The light panels provide you little light, light which you try to make the best out of as long as you're still stuck in this muck. \n\nThe main access tunnel you are in extends to the east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x10y90z-10.c",
  "west" : DIR+"/rooms/sewer/x-10y90z-10.c"
  ]) );
}
