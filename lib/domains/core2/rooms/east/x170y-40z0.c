inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Heavy undergrowth" );
  set_long( "Overhanging vines reach down from the ceiling where they have twisted themselves around the network of water sprinklers above. Heavy foliage resulting from the high growth rate of the exotic plants here reach out from beyond the cement path to encroach upon the atrium walkway which you are standing on. \n\nThe only way out is to your east." );


  set_objects( 
 DIR+"/monsters/baboon.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/east/x180y-40z0.c"
  ]) );
}
