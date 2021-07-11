inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "The waters of the underground lake are very still, with you being the only motion causing ripples all around. High above you, illumination is provided by an unidentified light source. Shadows run among the support pillars, giving you the creeps. You shiver, not because of the shadows, but because of the ice-cold lake waters. \n\nWest and northwest takes you to the other parts of the shallow lake." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x40y20z-20.c",
  "northwest" : DIR+"/rooms/sewer/x40y30z-20.c"
  ]) );
}
