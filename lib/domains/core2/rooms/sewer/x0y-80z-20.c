inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "Large leaves of the plants here brush against your face as you make your way across the atrium. Nearby, you can hear the soft rustling of leaves as vents in the wall suck up the oxygen from the room and channel it to the City dome. You realize that the underground atrium was built with the specific task of providing air to the dome above. \n\nThe exit is to the southwest." );


  set_objects( 
 DIR+"/monsters/fern.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/sewer/x-10y-90z-20.c"
  ]) );
}
