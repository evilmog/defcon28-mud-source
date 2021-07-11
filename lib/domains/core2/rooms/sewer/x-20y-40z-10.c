inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The loud sounds of water cascading down from somewhere drowns out all other sounds in this large main access tunnel. You body cuts a swathe through the pile of trash floating in the water, leaving behind a fast-closing wake. The large tunnel is ill-lit by small light panels by the sides of the tunnel. \n\nYou may continue onwards to the east or the west. You can also go to the City dome by going up from here. " );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-40z-10.c",
  "up" : DIR+"/rooms/city/x-20y-40z0.c"
  ]) );
}
