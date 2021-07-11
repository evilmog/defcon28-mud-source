inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "This corridor you are in is made entirely out of steel, from the walls to the ceiling. Bright light panels above glare down upon you a bit too brightly for your comfort. Due to the lack of air-conditioning, you feel more than a little sweaty standing around here.\n\nThe corridor continues to the south and west." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x50y260z0.c",
  "west" : DIR+"/rooms/north/x40y270z0.c"
  ]) );
}
