inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 20);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "CFTC: End of East Hallway" );
  set_long( "The eastern hallway houses Milkitrade and L.T. Smith.  These two companies are based on Core.  As such, the offices here are larger than those in the north hallway.  The carpet here is a worn down gray, the walls plain white, in stark contrast to the grandeur of the lobby.\n\nThe entrance to L.T. Smith is to the south.  The CFTC administration offices are to the north.  The hallway continues to the west." );

 set_exits( ([
  "north" : DIR+"/rooms/cftc/x50y30z10.c",
  "south" : DIR+"/rooms/cftc/x50y10z10.c",
  "west" : DIR+"/rooms/cftc/x40y20z10.c"
  ]) );
}
