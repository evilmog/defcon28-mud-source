inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Employee-Management Liaisons" );
  set_long( "Sometimes an employee has a concern that is too personal or important to take to one of the formal departments.  In these instances, only speaking to a member of management directly can get the issue resolved.  This office handles setting up these meetings." );


  set_objects( 
 DIR+"/monsters/valerie.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y-40z0.c"
  ]) );
}
