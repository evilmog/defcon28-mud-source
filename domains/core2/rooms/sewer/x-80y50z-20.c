inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 50);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Holding Pen" );
  set_long( "You notice a certain dryness about the air in this pen. There is a button on the wall. The floor has been replaced with fine sand, and the small pen contains nothing else save for the sand. It doesn't look as if the sand goes down very deep but then again, you can never tell.\n\nThe exit is to your north." );

  add_item("button", "This is a large purple button, it says %^MAGENTA%^push%^RESET%^ me");
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-80y60z-20.c"
  ]) );
}
