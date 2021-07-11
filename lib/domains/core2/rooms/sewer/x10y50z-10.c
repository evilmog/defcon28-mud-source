inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This appears to be a turn in the main access tunnels. The middle of the tunnel is illuminated by the bright light panels in the ceiling, thus making it visibly brighter than the other parts of the large tunnel. Sewage is up to your waist here, and you actually notice more bubbles bubbling up on the filmy surface of the sewer waters. \n\nYou may continue along the main access tunnel to your north and east." );


  set_objects( 
 DIR+"/monsters/heptosquid.c", 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y60z-10.c",
  "east" : DIR+"/rooms/sewer/x20y50z-10.c"
  ]) );
}
