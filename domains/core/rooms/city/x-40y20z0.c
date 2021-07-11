inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "The walkway you are on lies directly over the fusion generator. It is lit by soft yellow lights which give the place a soft ambience. A slight vibration resonates throughout the place, an effect of the generator below.\n\nNorth takes you closer to the generator monitoring center. South will take you back to the outer generator loop." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y30z0.c",
  "south" : DIR+"/rooms/city/x-40y10z0.c"
  ]) );
}
