inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "You find this steel corridor to be confiningly hot, especially with the steel walls reflecting back the garish light from the panels above. The air-conditioner system seems to have broken down, and it does not seem like it is going to be repaired anytime soon.\n\nYou can continue either northwards or southwards." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x10y270z0.c",
  "south" : DIR+"/rooms/north/x10y250z0.c"
  ]) );
}
