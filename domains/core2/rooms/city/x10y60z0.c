inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small cramped office, the floors are cheap metal grating, the walls are slightly rusted steel.  There are several corkboards around the office with various reports on them.  There is a terminal on the desk in the center of the room." );

  add_item("terminal", "A small terminal, it appears to be displaying financial information.");

  set_objects( 
 DIR+"/monsters/ken.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y60z0.c"
  ]) );
}
