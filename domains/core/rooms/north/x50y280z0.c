inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Library Counter" );
  set_long( "You are in a nicely carpetted room. Although the air-conditioning is not working here, you notice that the room is not too hot due to the ceiling fan above you. This is the counter section of the library, where residents of the North Dome who want to borrow or return any library material conduct their transactions.\n\nThe exit is to the west. The library extends to the east." );


  set_objects( 
 DIR+"/monsters/heckle.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x60y280z0.c",
  "west" : DIR+"/rooms/north/x40y280z0.c"
  ]) );
}
