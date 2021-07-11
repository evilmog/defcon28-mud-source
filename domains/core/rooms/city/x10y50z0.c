inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a large office, the floors are nicely carpeted and the walls are covered in wood paneling.  Unlike the other offices there are no posters, corkboards, or terminals on the walls.  There is a large desk in the center of the room with a single terminal on it." );

  add_item("desk", "This is a large oak desk, it appears to be hundreds of years old, the only thing on the desk is a large terminal.");
  add_item("terminal", "This large terminal appears to be displaying mineral production and price trending information.");

  set_objects( 
 DIR+"/monsters/peter.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y50z0.c"
  ]) );
}
