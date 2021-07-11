inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 0);
  set_property("z", 10);

  add_area( "city" );
  set_short( "Operations" );
  set_long( "This room is full of operations consoles, this is where the entire colony is managed from. A big terminal is at the center of the room." );

  add_item("terminal", "This is a terminal, type '%^MAGENTA%^activate%^RESET%^' to find out what it can do");
 set_exits( ([
  "down" : DIR+"/rooms/city/x0y0z0.c"
  ]) );
}
