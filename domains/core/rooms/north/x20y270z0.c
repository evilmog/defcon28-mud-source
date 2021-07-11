inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "The air-conditioning is definitely not working, for you seem to be sweating excessively from all the heat generated here. The fact that the bright light from the panels on the ceiling are reflected by the stainless steel walls are of no help.\n\nYou can continue along this corridor by heading south or east." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x20y260z0.c",
  "east" : DIR+"/rooms/north/x30y270z0.c"
  ]) );
}
