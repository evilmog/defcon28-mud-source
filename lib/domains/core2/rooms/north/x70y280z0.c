inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Library" );
  set_long( "This is the eastern end of a passageway. Here, you notice that the bookshelves are more, taking advantage of the dead-end. A ceiling fan above dispels the heat, while the nice carpet under your feet provide a soft surface to walk on.\n\nThe exit is to your west." );

 set_exits( ([
  "west" : DIR+"/rooms/north/x60y280z0.c"
  ]) );
}
