inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor" );
  set_long( "This is the main corridor of the southwestern quadrant of The City dome.\n\nThe corridor continues north and south. The autodoc shop can be found to the east." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y-20z0.c",
  "south" : DIR+"/rooms/city/x-20y-40z0.c",
  "east" : DIR+"/rooms/city/x-10y-30z0.c"
  ]) );
}
