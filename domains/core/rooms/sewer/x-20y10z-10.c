inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "With sewer waters engulfing your knees, you slowly slosh your way around this canal, making the best of the darkness and the very narrow walls. Knowing fully well that you're drowned once the water level rises, you try not to stick around here too long. \n\nExit are to your north, east and west to the other parts of this waterway canal. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-20y20z-10.c",
  "east" : DIR+"/rooms/sewer/x-10y10z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y10z-10.c"
  ]) );
}
