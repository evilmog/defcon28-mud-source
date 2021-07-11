inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel : T-Junction" );
  set_long( "You stand at a T-junction of the main access tunnels. Here, the area is better illuminated by bigger lights located at the ceiling of this junction. Still, that offers little comfort from the cold mire which flows sluggishly from your waist downwards. " );


  set_objects( 
 DIR+"/monsters/wasteworm.c", 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x20y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x0y-40z-10.c"
  ]) );
}
