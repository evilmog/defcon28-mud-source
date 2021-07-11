inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 20);
  set_property("z", 20);

  add_area( "city" );
  set_short( "CFTC: East Hallway" );
  set_long( "The eastern hallway houses Milkitrade and L.T. Smith.  These two companies are based on Core.  As such, the offices here are larger than those in the north hallway.  The carpet here is a worn down gray, the walls plain white, in stark contrast to the grandeur of the lobby.\n\nThe entrance to Milkitrade is here, on the south wall.  L.T. Smith and the CFTC administrative offices are further down the hall to the east.  The lobby is back to the west." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x30y10z20.c",
  "east" : DIR+"/rooms/city/x40y20z20.c",
  "west" : DIR+"/rooms/city/x20y20z20.c"
  ]) );
}
