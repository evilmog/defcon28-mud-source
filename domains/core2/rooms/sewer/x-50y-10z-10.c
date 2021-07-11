inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Your legs slosh around the knee-deep waters of the waterway canal. The near-darkness prevents you from seeing what's below the surface of the sewage, but at least you manage to guide yourself along by using the dirt-streaked walls. \n\nThe waterway canal extends to the south and east. A lair lies to the west. " );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-50y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x-60y-10z-10.c"
  ]) );
}
