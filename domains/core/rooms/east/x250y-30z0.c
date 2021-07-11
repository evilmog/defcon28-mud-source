inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 250);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This is a corridor in the East Dome. It's not too large, and the blue stripes running alongside both walls are shiny enough to give this corridor a rather bluish glow.\n\nThe dome's clerical area lies to your east. Otherwise you can head north or west to get to other corridors." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x250y-20z0.c",
  "east" : DIR+"/rooms/east/x260y-30z0.c",
  "west" : DIR+"/rooms/east/x240y-30z0.c"
  ]) );
}
