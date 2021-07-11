inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Clerical Area" );
  set_long( "A definite feeling of perpetual emergency exists in this room, as you see countless harried-looking clerks running back and forth in an attempt to complete their assigned tasks. A few tables are scattered all over the room, but the occupant is the never the same person for a full five minutes. \n\nMore clerical areas can be accessed to the south. To your east is an employees area for the clerical workers, while the filing department is located to your northeast. " );


  set_objects( 
 DIR+"/monsters/eastclerk.c", 
 DIR+"/monsters/eastclerk.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x260y-30z0.c",
  "northeast" : DIR+"/rooms/east/x270y-10z0.c"
  ]) );
}
