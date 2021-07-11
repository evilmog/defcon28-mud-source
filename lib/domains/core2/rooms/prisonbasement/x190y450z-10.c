inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 450);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Reactor Deck" );
  set_long( "The reactor deck is brightly lit. The soft purring of the reactor surrounds you completely. The grill floor below is vibrating slightly from the immense amount of power which the reactor is generating. Overhead, huge light plates almost blind you with their intensity. Just next to you is the outer hull of REACTOR ONE.\n\nThe leak control station is to your north. A tube passageway may be accessed by going east, and another reactor deck is to your south." );


  set_objects( 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1physicist.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x190y460z-10.c",
  "south" : DIR+"/rooms/prisonbasement/x190y440z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x200y450z-10.c"
  ]) );
}
