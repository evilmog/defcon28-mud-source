inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "You seem to be at the eastern end of a corridor. Here the light panels are not as bright as the other parts of the corridor, and you actually feel some respite from the other heated up corridors. All the walls and ceiling are still made out of steel though.\n\nStoreroom are located to your east and south. The corridor continues to your west." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x30y250z0.c",
  "east" : DIR+"/rooms/north/x40y260z0.c",
  "west" : DIR+"/rooms/north/x20y260z0.c"
  ]) );
}
