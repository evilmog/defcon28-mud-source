inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "You find yourself walking along a corridor made entirely out of steel. It is pretty hot in here, especially with the steel walls reflecting the garish light from the light panels above and the lack of air-conditioning in this dome area.\n\nThis corridor extends to the north, east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x30y280z0.c",
  "east" : DIR+"/rooms/north/x40y270z0.c",
  "west" : DIR+"/rooms/north/x20y270z0.c"
  ]) );
}
