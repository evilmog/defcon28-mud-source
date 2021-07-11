inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 470);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Cold Coolant Storage Area" );
  set_long( "It is extremely cold in this room. Unlike the other coolant storage areas, this one seems to have no auto-thermostat system to regulate the temperature. The coolant cylinders sitting around in this room seem to have frost all over them. There are even icicles hanging from the pipes which transfer the coolant fluids to the reactor.\n\nThe exit is to the north." );


  set_objects( 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x200y480z-10.c"
  ]) );
}
