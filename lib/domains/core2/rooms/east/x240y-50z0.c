inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Power Management" );
  set_long( "Linked to the domes power room, the power management room is where Core certified technicians can change the power settings of the entire dome. All around you are computer mainframes which are used to control the power in the dome. Due to the nature of the work done here, the rooms temperature settings are kept to a minimum.\n\nYou can leave by heading east to the planning room or west to the dome managers secretary's office." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x250y-50z0.c",
  "west" : DIR+"/rooms/east/x230y-50z0.c"
  ]) );
}
