inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -70);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "From where you are, you can see the small vents embedded in the walls of the atrium sucking in the air which the fern-like plants are producing. High above you, bright solar panels radiate ultra-violet rays down on the plants, while the dark earth which you are walking on seem to be providing enough nutrients for the plants to grow so well. \n\nPaths to the other parts of the atrium lead northeast and southeast." );


  set_objects( 
 DIR+"/monsters/fern.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x20y-60z-20.c",
  "southeast" : DIR+"/rooms/sewer/x20y-80z-20.c"
  ]) );
}
