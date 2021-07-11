inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This appears to be a large office, its walls appear to be stainless steel and the floor looks to be cheap metal grating.  Various pipes can be seen running under the floor.  In the center of the room is a metal desk with a small terminal on it.  Several corkboards with reports pinned to them are attached to the walls." );

  add_item("reports", "These appear to be standard company stock performance reports.  They are about an inch thick and appear to have been printed very recently.");
  add_item("desk", "A large metal desk.");
  add_item("terminal", "A small terminal, it appears to be displaying financial information.");

  set_objects( 
 DIR+"/monsters/craig.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x30y20z0.c"
  ]) );
}
