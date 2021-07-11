inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Steel seems to be the element of the day as you walk along a corridor with steel walls, a steel ceiling and a floor made out of steel plates. Each step you take echo around the corridor courtesy of the sub-hollow steel plating which is the floor.\n\nYou can continue along this corridor to the east or west. The entrance of this domes library is located to your north." );


  set_objects( 
 DIR+"/monsters/northdomeguard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x40y280z0.c",
  "east" : DIR+"/rooms/north/x50y270z0.c",
  "west" : DIR+"/rooms/north/x30y270z0.c"
  ]) );
}
