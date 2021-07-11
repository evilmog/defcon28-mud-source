inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 630);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "eastmine" );
  set_short( "East Mine Ruins" );
  set_long( "This is the center of the East Mine, it once had miners here but now the floor is just rubble and scrap and the walls look like they have seen better days." );

 set_exits( ([
  "north" : DIR+"/rooms/eastmine/x630y40z0.c",
  "south" : DIR+"/rooms/eastmine/x630y-40z0.c",
  "east" : DIR+"/rooms/eastmine/x670y0z0.c",
  "west" : DIR+"/rooms/eastmine/x590y0z0.c"
  ]) );
}
