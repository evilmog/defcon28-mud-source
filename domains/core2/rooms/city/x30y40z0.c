inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Metal Exchange Index" );
  set_long( "Upon entering the room you are shocked by the deafening noise that permeates the room. Company employees are running all over the place waving colored slips of paper.  Some look radiantly happy while others look ready to kill themselves. In front of you is a very large list showing the current prices of the stocks for trade on the market.\n\nSeveral account terminals and trade terminals have been mounted along the walls." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x30y30z0.c"
  ]) );
}
