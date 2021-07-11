inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Lobby" );
  set_long( "his is the lobby of the North housing dome. The ceiling is quite high, with a small chandelier located in the middle of the room for illumination. At the corners of the lobby are a few chairs, put there by the administration for the benefit of people who just want to sit around doing nothing in particular.\n\nCorridors extend to your north and southeast. To your northeast is the reception, the housing listing office is to your south while the foyer is located to your southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x20y240z0.c",
  "south" : DIR+"/rooms/north/x20y220z0.c",
  "northeast" : DIR+"/rooms/north/x30y240z0.c",
  "southeast" : DIR+"/rooms/north/x30y220z0.c",
  "southwest" : DIR+"/rooms/north/x10y220z0.c"
  ]) );
}
