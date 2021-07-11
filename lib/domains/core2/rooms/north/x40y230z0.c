inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Housing Records Storage" );
  set_long( "Dust hangs heavily in the air. It appears that there has not been much activity here for a very long time. The room itself is relatively big, and rows of cabinets adorn the walls of the room. Apart from an ancient-looking desk which sits despondently in one corner, the only other furniture here are the cabinets.\n\nYou may leave by heading north." );

  add_item("desk", "Someone once used this table for record-keeping purposes. Now it just sits in one corner, forgotten. A button is on the desk.");
  add_item("button", "This is a purple button, it says 'PRESS ME'");
 set_exits( ([
  "north" : DIR+"/rooms/north/x40y240z0.c"
  ]) );
}
