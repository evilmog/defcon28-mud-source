inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Dome Managers Office" );
  set_long( "A brightly-lit place, you can see that this office has been very tidily kept. All the furniture are immaculately arranged, and even the dome managers desk is very systematically organized. You do not doubt that this is the penultimate in condusive working environments.\n\nThe exit is to your south." );


  set_objects( 
 DIR+"/monsters/vlarapp.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x230y-50z0.c"
  ]) );
}
