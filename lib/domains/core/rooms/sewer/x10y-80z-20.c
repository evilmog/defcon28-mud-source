inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "Artificial sunlight bear down upon you from ultra-violet light panels mounted in the ceiling. This is an underground atrium, constructed by the City's sewer engineers to help provide oxygen to the City dome. It appears to be a little overgrown with a kind of fern-like plant, but otherwise, it is a hidden paradise in the midst of the sewers.\n\nA path to the south leads to an access shaft. The atrium continues to your east." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y-90z-20.c",
  "east" : DIR+"/rooms/sewer/x20y-80z-20.c"
  ]) );
}
