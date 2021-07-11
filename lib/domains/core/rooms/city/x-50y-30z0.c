inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Corridor" );
  set_long( "Various maintenance tasks must be performed outside the safety of the domes.  Be warned: Any employee can just wander outside.  Since you signed a waiver when you came to the colony, the Company has no liability if you get yourself killed doing something stupid.  Heed all cautions before venturing outside the dome.  The airlock is farther along the corridor to the south.  The main southwest corridor is to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-20z0.c",
  "south" : DIR+"/rooms/city/x-50y-40z0.c"
  ]) );
}
