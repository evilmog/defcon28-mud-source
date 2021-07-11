inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center -  Sub-Hallway" );
  set_long( "This is a sub-hallway away from the normal hub of the Detention center.  To the north lies the Enforcement Officer break room, off-limits to non-Enforcement.  The hallway heads back to the east towards the dome exit and the foreboding interrogation room. " );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x180y230z0.c",
  "east" : DIR+"/rooms/prison/x190y220z0.c"
  ]) );
}
