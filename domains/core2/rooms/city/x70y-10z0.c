inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Anteroom of Vice President Grey" );
  set_long( "This tastefully decorated room is where you may wait for Vice President Grey to grant you an audience.  Greys office is to the east, but it would be considered a gross invasion of his privacy if you entered without gaining permission first.  Greys secretary and the exit is to the south." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x70y-20z0.c",
  "east" : DIR+"/rooms/city/x80y-10z0.c"
  ]) );
}
