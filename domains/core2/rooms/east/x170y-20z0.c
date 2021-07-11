inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Walkway" );
  set_long( "Soft lightpanels cast long bulky shadows everywhere along this walkway. The air feels very wet, and the walkway beneath you feels a bit slippery. Plants on both sides of the walkway seem very unfamiliar to you. Above you is a network of water sprinklers which seem to go off in every direction.\n\nThe plants seem to have dominated the cement path further up northwest. Clearings lie to your south and northeast." );


  set_objects( 
 DIR+"/monsters/python.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x170y-30z0.c",
  "northeast" : DIR+"/rooms/east/x180y-10z0.c",
  "northwest" : DIR+"/rooms/east/x160y-10z0.c"
  ]) );
}
