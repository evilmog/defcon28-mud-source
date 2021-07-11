inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 470);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "The circular parameter of this passageway is lined with many wires, cables and pipes which seem to be connected to everywhere. Dimly-lit, your way is illuminated only by the small grace of some thin light plates which have been affixed to the ceiling, walls and floor of this tubelike passage.\n\nTo the north is the coolant storage area. This passageway extends to your southeast." );


  set_objects( 
 DIR+"/monsters/bugsy.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x190y480z-10.c",
  "southeast" : DIR+"/rooms/prisonbasement/x200y460z-10.c"
  ]) );
}
