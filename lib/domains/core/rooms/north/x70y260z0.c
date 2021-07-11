inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Store Corridor" );
  set_long( "You find yourself in a store corridor, a place used by droids to to travel between the other parts of this dome quarter and their storage bays. This place stinks of lubricating fluids, and you detect that the walls and the floors are well-marked with the droids passage.\n\nYou may continue east or west along this store corridor. A steel corridor is located to your southeast." );

 set_exits( ([
  "east" : DIR+"/rooms/north/x80y260z0.c",
  "west" : DIR+"/rooms/north/x60y260z0.c",
  "southeast" : DIR+"/rooms/north/x80y250z0.c"
  ]) );
}
