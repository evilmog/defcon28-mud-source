inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Entrance" );
  set_long( "Lush exotic-looking plants grow abundantly all over this place. This is the entrance of an atrium located in the East Housing dome. The floor around you is paved with cement, while fresh soil cover the wide areas around the cement walkway. This atriums main purpose is to keep the natural air balance of the dome stable while at the same time providing sanctuary for the animals from Earth which have been transported to the colony.\n\nA metal archway to the northeast, lined with vines, lead to the the center mass-transit station of the East Housing dome. The cement walkway continues onward to the southwest." );


  set_objects( 
 DIR+"/monsters/mamba.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/east/x210y0z0.c",
  "southwest" : DIR+"/rooms/east/x190y-20z0.c"
  ]) );
}
