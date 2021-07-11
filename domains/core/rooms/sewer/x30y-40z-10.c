inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "With a floor to ceiling height of almost fifteen feet and a width of nearly ten feet, the main access tunnel you are in is indeed imposing. You wade waist-deep in the slow-moving murky waters, aware of the putrid smell all around you. Small lights illuminate the sides of the tunnel. \n\nThe main access tunnel continues to the east and west. A water tunnel can be accessed to the south. " );


  set_objects( 
 DIR+"/monsters/snake.c", 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x30y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x40y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-40z-10.c"
  ]) );
}
