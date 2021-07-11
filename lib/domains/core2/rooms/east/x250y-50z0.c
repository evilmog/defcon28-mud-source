inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 250);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Planning Room" );
  set_long( "Brightly lit and spacious, the planning room is the place where the top dome executives and dome planners work together to plan out the domes management. Policies regarding the East dome, work orders and modifications to the dome are brought up here before actual implementation.\n\nTo the north is the public relations office, while to the west is the power management room." );


  set_objects( 
 DIR+"/monsters/planner.c", 
 DIR+"/monsters/planner.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x250y-40z0.c",
  "west" : DIR+"/rooms/east/x240y-50z0.c"
  ]) );
}
