inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "The bright lights here bears down harshly upon you, and coupled with the reflection on the steel walls, you find yourself caught in a most powerful glare of illumination. The steel plates which make up the floor of this corridor creates steely echoes for your footfalls here.\n\nYou may continue along this corridor by heading south or east." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x70y240z0.c",
  "east" : DIR+"/rooms/north/x80y250z0.c"
  ]) );
}
