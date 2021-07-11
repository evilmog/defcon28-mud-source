inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Reactor storeroom" );
  set_long( "Multiple racks and shelves have been placed in this room for the purpose of storing all of the reactor techs' technical components and equipment. Light is generously provided by a single lightpad above you which is almost as wide as the ceiling itself." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-10y30z0.c"
  ]) );
}
