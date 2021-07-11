inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Reactor Deck" );
  set_long( "The floor seems to vibrate slightly as the reactor hums pleasantly in the background. Bright lights are needed here as the maintenance personnel have to carry out their duties in good and clear lighting. High above you, the huge light plates which cover the entire length of the ceiling almost blind you with their intensity.\n\nTo your east is another reactor deck, while going west will take you to the reactor's main control center." );


  set_objects( 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x190y440z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x170y440z-10.c"
  ]) );
}
