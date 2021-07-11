inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 270);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "The blue stripe running along the walls of this corridor mark this dome as the East housing dome. For apart from the stripes, there are no other distinctive features here.\n\nTo your north is another corridor. To your east is the droid maintenance bay." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x270y-50z0.c",
  "east" : DIR+"/rooms/east/x280y-60z0.c"
  ]) );
}
