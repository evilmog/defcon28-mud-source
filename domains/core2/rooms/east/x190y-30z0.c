inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "A clearing" );
  set_long( "You have reached a clearing in the atrium. Here, the ceiling is over twelve feet high, and bright solar-panels radiate artificial solar energy down upon you. There is little sign of the exotic plants which so populate the atrium in this clearing.\n\nThe walkway extends to your west and southwest. A panel set into the high metal wall takes you into a passage southeast from here." );


  set_objects( 
 DIR+"/monsters/baboon.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/east/x180y-30z0.c",
  "southeast" : DIR+"/rooms/east/x200y-40z0.c",
  "southwest" : DIR+"/rooms/east/x180y-40z0.c"
  ]) );
}
