inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the main corridor of the southeastern quadrant of the city dome.  To the west, an access panel leads to the Office of Employee Morale.  The corridor continues to the north.  To the south is Vice President Duchie's old executive offices, now sealed up tightly." );


  set_objects( 
 DIR+"/monsters/wendall.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x20y-60z0.c",
  "west" : DIR+"/rooms/city/x10y-70z0.c"
  ]) );
}
