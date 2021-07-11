inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "Soft yellow lights beat down on you. The walls slant downwards, causing the floor to be narrower than the ceiling. vibrations constantly resonate throughtout this walkway, a reminder that the City's huge fusion generator is just directly underneath.\n\nWest takes you to the outer generator loop. Going east along the walkway will eventually take you to the generator monitoring center." );

 set_exits( ([
  "east" : DIR+"/rooms/city/x-50y40z0.c",
  "west" : DIR+"/rooms/city/x-70y40z0.c"
  ]) );
}
