inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Financial District, and the floors appear be made of cheap grey carpet while the walls have a fresh coat of white paint on them.\n\nAn access panel to the south leads to an office while the corridor continues to the west and east." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x50y10z0.c",
  "east" : DIR+"/rooms/city/x60y20z0.c",
  "west" : DIR+"/rooms/city/x40y20z0.c"
  ]) );
}
