inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "City Starport: Intake" );
  set_long( "You are standing at the entrance of Core's interstellar class starport. This busy port of commerce ships the mined minerals and the occasional Company official to Earth while receiving daily shipments of new machinery, parts, organic matter, and sometimes contraband. You are in the main city dome, controlled and maintained by The Company.\n\nThe Starport, City Library and Shay Park can be found to the south. The City's administrative offices are to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x60y-20z0.c",
  "south" : DIR+"/rooms/city/x60y-40z0.c"
  ]) );
}
