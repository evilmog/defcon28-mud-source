inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -200);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "Lobby" );
  set_long( "You have entered a well-lit quiet room.  Numerous chairs and small couches are set about the room in a very orderly manner.  In the northeast corner of the room sits a small desk with a smiling liktah secretary behind it. In the north wall is a door with a sign next to it reading, 'Employees only'." );

 set_exits( ([
  "north" : DIR+"/rooms/kore/x220y-190z0.c",
  "southwest" : DIR+"/rooms/kore/x210y-210z0.c"
  ]) );
}
