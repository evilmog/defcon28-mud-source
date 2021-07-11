inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Corridor" );
  set_long( "This is a long narrow corridor leading to an airlock that leads to the planet surface outside the safety of the domes. New employees are prohibited from exiting to the outside just because the inconvenience of having to ship replacement employees from Earth.  The airlock is further along this corridor to the south, and the main southwest corridor is to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-50z0.c",
  "south" : DIR+"/rooms/city/x-50y-70z0.c"
  ]) );
}
