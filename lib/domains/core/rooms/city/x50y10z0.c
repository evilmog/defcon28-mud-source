inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a large office, its walls are stainless steel and the floors are cheap metal grating.  Filing cabinets line one wall while corkboards with reports tacked to them are on another.  The large desk in the middle has reports stacked neatly on it.  The terminal in the corner of the room appears unused." );

  add_item("desk", "A large oak desk, it looks like it may have been imported from earth.");
  add_item("terminal", "This is a small rectangular touch screen, it appears to be completely unused.  A small slot in the wall underneath it appears to accept access cards of some type.");
  add_item("slot", "This appears to be a small recessed slot in the wall just below the terminal. It appears as if it might accept an access card.");

  set_objects( 
 DIR+"/monsters/bob.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x50y20z0.c"
  ]) );
}
