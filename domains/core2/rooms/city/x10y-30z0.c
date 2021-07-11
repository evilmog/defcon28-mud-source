inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Employee Health" );
  set_long( "This office handles everything from administering The Company's health insurance program to basic First Aid.  If your injuries are too severe (for instance, you were particularly belligerent at the Complaint Department) there are full featured medical facilities elsewhere in the dome.  A panel to the north leads to the Complaint Department." );


  set_objects( 
 DIR+"/monsters/rachel.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x10y-20z0.c",
  "east" : DIR+"/rooms/city/x20y-30z0.c"
  ]) );
}
