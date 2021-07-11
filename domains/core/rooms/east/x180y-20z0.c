inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Heavy undergrowth" );
  set_long( "Thick, heavy leaves of exotic and unknown plants threaten to swallow you up whole and overwhelm the cement path. The foliage is so abundant that the plants reach all the way to the ceiling, vines entwining along with the water sprinklers to effectively darken the whole area.\n\nBeneath you, the cement walkway leads out north to a clearing." );


  set_objects( 
 DIR+"/monsters/gorilla.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x180y-10z0.c"
  ]) );
}
