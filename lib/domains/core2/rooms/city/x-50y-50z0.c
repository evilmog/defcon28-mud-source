inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Corridor" );
  set_long( "This is a long narrow corridor leading to an airlock that leads to the planet surface outside the safety of the domes. There really is not much to do outside if you do not have maintenance tasks to perform.  The airlock is further along this corridor to the south, and the main southwest corridor is to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-40z0.c",
  "south" : DIR+"/rooms/city/x-50y-60z0.c"
  ]) );
}
