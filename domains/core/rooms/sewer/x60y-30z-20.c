inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "The large leaves tend to get into your way, but a good shove puts them out of the way easily. You notice vents by the sides of the walls here sucking in the air from the atrium, most probably to provide the City dome with more air for breathing. Even with the outgoing oxygen, you can still breath the fresh air here easily.\n\nNortheast and northwest take you to other parts of the underground atrium." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x70y-20z-20.c",
  "northwest" : DIR+"/rooms/sewer/x50y-20z-20.c"
  ]) );
}
