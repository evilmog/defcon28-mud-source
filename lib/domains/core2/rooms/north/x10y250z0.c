inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "The steel plates which make up the floor of this corridor echo your footfalls all over the place. The heat here is almost too hot to bear, especially with the walls of the corridor reflecting the light of the bright light panels above.\n\nExits are to the north, south and east." );


  set_objects( 
 DIR+"/monsters/northdomeguard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x10y260z0.c",
  "south" : DIR+"/rooms/north/x10y240z0.c",
  "east" : DIR+"/rooms/north/x20y250z0.c"
  ]) );
}
