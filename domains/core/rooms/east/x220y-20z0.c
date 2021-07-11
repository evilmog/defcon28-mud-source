inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "You find yourself walking inside the East housing dome. The corridor is not too large, but wide enough to allow three average-sized adult humans to walk abreast.\n\nYou may continue to your north or south." );


  set_objects( 
 DIR+"/monsters/droid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x220y-10z0.c",
  "south" : DIR+"/rooms/east/x220y-30z0.c"
  ]) );
}
