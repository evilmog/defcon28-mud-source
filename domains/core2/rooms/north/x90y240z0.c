inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Executive Toilet" );
  set_long( "You find yourself in a cool toilet which is almost as big as the office outside. A shower stall is by a corner, while at the southern end is a bathtub. The floor is surfaced with black tiles, and you seem to feel that the whole place is a bit too luxurious to be in the North Dome sector.\n\nThe exit is located to your west." );

 set_exits( ([
  "west" : DIR+"/rooms/north/x80y240z0.c"
  ]) );
}
