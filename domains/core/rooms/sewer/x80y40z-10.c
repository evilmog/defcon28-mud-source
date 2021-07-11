inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Dry Pipe" );
  set_long( "The pipe you are in is not only dry, but it is also very clean. It's obvious that no water has ever flowed across these metal surfaces before. You can actually move through the pipe with much ease, especially since it is very wide.\n\nThe pipe extends to the north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y50z-10.c",
  "south" : DIR+"/rooms/sewer/x80y30z-10.c"
  ]) );
}
