inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You are in a large moss-covered pipe, slowly struggling to move along the otherwise smooth surface of the pipe with the help of the moss. It stinks quite royally in here, something which the thin stream of water flowing at the bottom of the pipe is making worse.\n\nYou can exit the pipe into a sewer passage to the north, or continue south down the pipe." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y-10z-10.c",
  "south" : DIR+"/rooms/sewer/x60y-30z-10.c"
  ]) );
}
