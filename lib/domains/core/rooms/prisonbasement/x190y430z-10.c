inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "The round tube-like shape of this corridor gives you the feeling that you're walking in the belly of some metallic snake. And the many wires, pipes and cables which adorn the entire passageway are somewhat reminiscent of all those derelict spaceship horror movies which they used to make back in the twenty first century.\n\nTo your east is the reception area, while the reactor's security center lies to your west." );

 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x200y430z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x180y430z-10.c"
  ]) );
}
