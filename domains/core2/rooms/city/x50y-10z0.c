inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Employee Affairs" );
  set_long( "The Company is a firm believer in an open door policy. Namely, There's the door, it is open, use it.  However, for the sake of public image this department was created to listen to the endless drone of whining all employees seem to be prone to." );


  set_objects( 
 DIR+"/monsters/hans.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x50y-20z0.c"
  ]) );
}
