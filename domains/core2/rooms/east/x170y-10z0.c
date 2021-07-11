inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Heavy undergrowth" );
  set_long( "The plants in this part of the atrium seem to be enjoying a very high growth rate, for the thicket here is so dense that nothing can possible make its way through the underbrush. The cement walkway seems to have come to an end here, while the abundance of plants everywhere makes this area dark.\n\nThe only way out of this thick undergrowth is east." );


  set_objects( 
 DIR+"/monsters/panther.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/east/x180y-10z0.c"
  ]) );
}
