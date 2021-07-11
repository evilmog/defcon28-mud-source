inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 210);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Central Area" );
  set_long( "In front of you is the housing building.  Parts of it is under construction but a couple of liveable wings have been developed and can be accessed by going up the turbolift.  You can also check out the northeast quadrant of this floor." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x0y310z0.c",
  "south" : DIR+"/rooms/north/x0y110z0.c",
  "east" : DIR+"/rooms/north/x100y210z0.c",
  "west" : DIR+"/rooms/north/x-100y210z0.c",
  "northeast" : DIR+"/rooms/north/x10y220z0.c"
  ]) );
}
