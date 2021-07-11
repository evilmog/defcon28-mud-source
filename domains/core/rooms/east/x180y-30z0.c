inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Walkway" );
  set_long( "This cement path is the only thing which keeps the plants from growing over the many various passages in the atrium. The air is wet with moisture, courtesy of the water sprinklers suspended just below the ceiling. Lightpanels overhead illuminate the passage dimly, partially caused by the obstructing leafage. \n\nClearings are located to both your east and west. The atrium walkway continues northeast." );


  set_objects( 
 DIR+"/monsters/monkey.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/east/x190y-30z0.c",
  "west" : DIR+"/rooms/east/x170y-30z0.c",
  "northeast" : DIR+"/rooms/east/x190y-20z0.c"
  ]) );
}
