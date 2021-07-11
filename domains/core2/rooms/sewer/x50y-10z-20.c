inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -10);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access shaft" );
  set_long( "You find yourself in a small access shaft. The walls here look old and worn out. Small puddles of water gather around depressions in the dilapidated cement floor, but at least the shaft itself is dry due to the protective metal ring around it.\n\nThe access shaft you are in leads downwards. A sewer tunnel can be reached by going northeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x60y0z-20.c",
  "down" : DIR+"/rooms/sewer/x50y-10z-30.c"
  ]) );
}
