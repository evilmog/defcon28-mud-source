inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Library Entrance" );
  set_long( "This is the entrance to the North Dome Library. Apart from the surrounding steel corridor, it has a nice arch as an entrance. Unfortunately, the arch is all that the Company is able to spend on the exterior decor of this place.\n\nThe library can be reached by going east. Otherwise, you may leave by going south." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x40y270z0.c",
  "east" : DIR+"/rooms/north/x50y280z0.c"
  ]) );
}
