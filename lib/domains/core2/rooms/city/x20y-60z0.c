inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the main corridor of the southeastern quadrant of the city dome.  To the west, an access panel leads to the Office of Safety.  The Company cafeteria used to lie to the east, but has been replaced by a small office." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y-50z0.c",
  "south" : DIR+"/rooms/city/x20y-70z0.c",
  "east" : DIR+"/rooms/city/x30y-60z0.c",
  "west" : DIR+"/rooms/city/x10y-60z0.c"
  ]) );
}
