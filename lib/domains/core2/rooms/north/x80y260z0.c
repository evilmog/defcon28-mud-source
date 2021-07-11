inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Store Corridor" );
  set_long( "Wafts of lubrication fluids are everywhere in this area. You can see that droids have used this passage a lot, judging from the amount of scratches on the walls and the abundant track marks on the floor.\n\nTo your north is a droid bay. Otherwise, you can continue west along this corridor." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x80y270z0.c",
  "west" : DIR+"/rooms/north/x70y260z0.c"
  ]) );
}
