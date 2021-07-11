inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the main corridor of the southeastern quadrant of the city dome.  To the west, an access panel leads to the Office of Employee Health.  There is a large picture window on the east wall that your gaze is drawn to.  The corridor continues infinitely to the north and south.\n\nThere is a manhole here that leads down to the sewers." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y-20z0.c",
  "south" : DIR+"/rooms/city/x20y-40z0.c",
  "west" : DIR+"/rooms/city/x10y-30z0.c",
  "down" : DIR+"/rooms/sewer/x20y-30z-10.c"
  ]) );
}
