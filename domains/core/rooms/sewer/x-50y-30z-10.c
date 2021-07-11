inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The dark and dank conditions of the waterway canal is getting to you. Now you expect a sewer creature to burst out of the water everytime you move a little. Which is to be expected, what with the knee-deep waters and narrow confines of this canal. \n\nA lair lies to your northwest. To your north the waterway canal continues. " );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y-20z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-60y-20z-10.c"
  ]) );
}
