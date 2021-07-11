inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Maintenance Corridor" );
  set_long( "This is a maintenance corridor. Large pipes with steam coming out from the joints fill up the majority of the corridor, leaving you just enough space to move around. Occasionally, steam bursts from one of the pipes.\n\nThe eastern wall seems to be a dead-end, but it doesn't look too solid. The maintenance corridor continues to your southwest." );
  add_item("wall", "The eastern wall looks suspiciously false, as if it's not made to be solid enough to be a wall. Perhaps you can try entering it to find out more about its qualities.");
 set_exits( ([
  "southwest" : DIR+"/rooms/sewer/x-10y20z-20.c"
  ]) );
 set_hidden_exits( ([
  "wall" : DIR+"/rooms/sewer/x10y30z-20.c"
  ]) );
}
