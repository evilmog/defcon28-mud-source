inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 460);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "This long tube-like passageway is lined with a host of wires, cables and pipes. Its unique circular shape reminds you of the mass-transit tubes except for the fact that humans and not tubes travel along these tubes.\n\nThis passage snakes along to the northwest and the south." );

 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x200y450z-10.c",
  "northwest" : DIR+"/rooms/prisonbasement/x190y470z-10.c"
  ]) );
}
