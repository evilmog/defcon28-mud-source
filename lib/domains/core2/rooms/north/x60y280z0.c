inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Library" );
  set_long( "Shelves of books surround you on either side of this passageway. Though it is not too large, you can see that the library has a pretty large variety of books. The carpet feels nice beneath your feet, while a ceiling fan above you expels the heat which so plagues this dome.\n\nThe library counter is located to your west. The reading room is to your north, while the library itself extends to your east." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x60y290z0.c",
  "east" : DIR+"/rooms/north/x70y280z0.c",
  "west" : DIR+"/rooms/north/x50y280z0.c"
  ]) );
}
