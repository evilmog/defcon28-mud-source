inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "With the cold sewage up to your waist and the small lights giving rather poor lighting, you start having second thoughts about roaming these sewers. To add to that, the smell here isn't exactly perfumy either.\n\nNorth and south takes you further along the main access tunnels. East brings you to a sewer passage." );


  set_objects( 
 DIR+"/monsters/shelledheptosquid.c", 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y0z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x60y-10z-10.c"
  ]) );
}
