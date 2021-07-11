inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "You are chest-deep in a large underground lake. The water is chilly, and your only source of light seems to be something coming from the top of the high ceiling. Support pillars are scattered far and few all over the place. At least the water you're in does not contain sewage or anything like that.\n\nThe access shaft which seems to be in the middle of the lake lies to your northeast. You may continue north, east or southwest into the lake." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y40z-20.c",
  "east" : DIR+"/rooms/sewer/x30y30z-20.c",
  "northeast" : DIR+"/rooms/sewer/x30y40z-20.c",
  "southwest" : DIR+"/rooms/sewer/x10y20z-20.c"
  ]) );
}
