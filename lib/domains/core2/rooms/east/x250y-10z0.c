inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 250);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "The blue stripes which are on the walls of this corridor give it the illusion of seeming longer that it actually is. The west end of this corridor appears to continue on indefinitely, while the east end is much nearer. You can leave this area by heading west. Otherwise, you can enter the unit listings room to your east." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x260y-10z0.c",
  "west" : DIR+"/rooms/east/x240y-10z0.c"
  ]) );
}
