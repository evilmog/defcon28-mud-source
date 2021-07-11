inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small cramped office, the walls are stainless steel and the floors are cheap metal grating.  Corkboards adorn the walls, with various reports pinned to them.  The only real electronics in the room lie in the form of a small terminal on the wooden desk in the corner." );

  add_item("desk", "An old rickety desk, appears to be made of particle board.");
  add_item("terminal", "A small terminal, it appears to be displaying financial data.");
  add_item("corkboards", "These appear to be rectangular sheets about 2 meters wide by 1 meter tall that are lined with cork to allow paper reports to be pinned to them.");

  set_objects( 
 DIR+"/monsters/john.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x70y20z0.c"
  ]) );
}
