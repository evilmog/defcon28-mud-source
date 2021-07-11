inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "This part of the lake seems to have a lot more support pillars than usual. You notice that it is also a little more brighter, but you still can't make out the source of light up above. The waters of the lake are still as cold as ever, causing you to keep moving constantly, even if it's in little shakes and shivers.\n\nYou can continue to the other parts of the lake by heading north, east or west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y30z-20.c",
  "east" : DIR+"/rooms/sewer/x40y20z-20.c",
  "west" : DIR+"/rooms/sewer/x20y20z-20.c"
  ]) );
}
