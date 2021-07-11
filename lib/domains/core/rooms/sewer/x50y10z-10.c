inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Little bubbles erupt from the murky sewer waters around you. As you move sluggishly through the accumulated waste here, you use what little illumination the small lights by the sides of the tunnel give out. \n\nThe main access tunnel extends to the north and south. A service duct is located to your east." );


  set_objects( 
 DIR+"/monsters/log.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y20z-10.c",
  "south" : DIR+"/rooms/sewer/x50y0z-10.c",
  "east" : DIR+"/rooms/sewer/x60y10z-10.c"
  ]) );
}
