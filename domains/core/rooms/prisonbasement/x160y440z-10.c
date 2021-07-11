inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 160);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "Pipes, cables and wires adorn the entire length of the passageway you're in. You seem to feel a bit claustrophobic, especially since it is rather dark here. Somewhere, you can hear the hum of the reactor. The whole tube is vibrating slightly with the immensity of the power being generated.\n\nThe tube passageway continues south. To the east is the main control center, while the radiology department lies to the west." );

 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x160y430z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x170y440z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x150y440z-10.c"
  ]) );
}
