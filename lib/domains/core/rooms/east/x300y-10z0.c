inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 300);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This is a corridor in the southeast quadrant of the East housing dome. A sign hangs over your head, informing you of the nature of this area. \n\nA mass-transit station is located to your northeast. The corridor continues to your south. " );

  add_item("sign", "The sign reads :\n\n%^BLUE%^EAST HOUSING DOME : SOUTHEAST QUADRANT%^RESET%^%\nRegistrar's Office\nEnter on urgent matters only");
 set_exits( ([
  "south" : DIR+"/rooms/east/x300y-20z0.c",
  "northeast" : DIR+"/rooms/east/x310y0z0.c"
  ]) );
}
