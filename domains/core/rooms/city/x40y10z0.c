inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial - Interrogation Room" );
  set_long( "A small cramped office, the walls are jet black titanium and the floors are cheap stainless steel.  There is nothing in this room except for a sturdy metal table in the center and metal chair, both appear to be welded to the floor." );

  add_item("table", "A sturdy metal table of unknown origin, it appears to be welded to the floor.");
  add_item("chair", "A sturdy metal chair of unknown origin, it appears to be welded to the floor.");
 set_exits( ([
  "north" : DIR+"/rooms/city/x40y20z0.c"
  ]) );
}
