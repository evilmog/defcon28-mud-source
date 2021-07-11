inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 160);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Pong Area" );
  set_long( "You stand at the edge of a small pond, only six feet across. The water is crystal clear, and you estimate the depth to be only four feet deep. The pond is circular in shape, its form bordered by a heavy-looking metal circle. All around the pond, unfamiliar plants grow with casual abundance. \n\nThe cement path will take you southeast along an atrium walkway." );


  set_objects( 
 DIR+"/monsters/doe.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/east/x170y-30z0.c"
  ]) );
}
