inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Corridor" );
  set_long( "This is a long narrow corridor leading to an airlock that leads to the planet surface outside the safety of the domes. The atmosphere outside is poisonous so pressure suits are required.  The airlock is to the south along this corridor The main southwest corridor is to the north.  You see a barracks to your east." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-30z0.c",
  "south" : DIR+"/rooms/city/x-50y-50z0.c",
  "east" : DIR+"/rooms/city/x-40y-40z0.c"
  ]) );
}
