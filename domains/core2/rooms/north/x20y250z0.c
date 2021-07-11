inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "A corridor with steel for floor, ceiling and walls, this place is unbearably hot and bright, a condition brought upon by the bright light panels above and the defunct air-conditioner system. Definitely not a place to take a breather.\n\nYou can continue to the north, south or west." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x20y260z0.c",
  "south" : DIR+"/rooms/north/x20y240z0.c",
  "west" : DIR+"/rooms/north/x10y250z0.c"
  ]) );
}
