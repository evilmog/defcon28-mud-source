inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the main corridor of the southeastern quadrant of the city dome.  To the north, an access panel leads to the Office of Supply Distribution Logistics.  There is a large picture window on the south wall that your gaze is drawn to.  The corridor continues infinitely to the east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x30y-10z0.c",
  "east" : DIR+"/rooms/city/x40y-20z0.c",
  "west" : DIR+"/rooms/city/x20y-20z0.c",
  "down" : DIR+"/rooms/sewer/x30y-20z-10.c"
  ]) );
}
