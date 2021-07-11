inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -220);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "Antechamber" );
  set_long( "You are in a dimly lit room that has a small altar with a statue of 3 bronze, small interlocking gears resting upon it. Other scraps of metal rest on the table as offerings to Technology. A priest stands in the room at all times, bestowing blessings on the faithful and seekers alike.");
 set_exits( ([
  "northwest" : DIR+"/rooms/kore/x210y-210z0.c"
  ]) );
}
