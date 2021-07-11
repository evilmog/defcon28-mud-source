inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small cramped office. The walls are stainless steel and the floors are cheap metal grating. Various papers are strewn across the room and its almost impossible to see the desk and terminal in the corner." );

  add_item("desk", "A small rickety desk, obviously too small for the load of paperwork stacked on it.");
  add_item("terminal", "A small terminal, it appears to be displaying financial information.");

  set_objects( 
 DIR+"/monsters/mike.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x60y20z0.c"
  ]) );
}
