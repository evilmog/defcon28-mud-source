inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 20);
  set_property("z", 10);

  add_area( "city" );
  set_short( "CFTC: East Hallway" );
  set_long( "The eastern hallway houses Milkitrade and L.T. Smith.  These two companies are based on Core.  As such, the offices here are larger than those in the north hallway.  The carpet here is a worn down gray, the walls plain white, in stark contrast to the grandeur of the lobby.\n\nThe hallway continues to the east and west.  The offices of L.T. Smith are further down the hallway to the east." );

 set_exits( ([
  "east" : DIR+"/rooms/city/x50y20z10.c",
  "west" : DIR+"/rooms/city/x30y20z10.c"
  ]) );
}
