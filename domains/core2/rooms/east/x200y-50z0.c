inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium service room" );
  set_long( "This is a rather small room, with steel walls and a large turbine spinning away above a heavy iron grate in the ceiling. To the south of the room is a semi-circular array of consoles, each indicating the status of various environmental controls in the atrium itself. The soft whirrings and the occasional clicking sound in the background hints of the self-automated nature of this service room.\n\nThe door to your north takes you out to a service passage." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x200y-40z0.c"
  ]) );
}
