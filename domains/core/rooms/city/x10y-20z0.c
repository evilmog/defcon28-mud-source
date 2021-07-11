inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Complaint Department" );
  set_long( "The Company understands that everyone has complaints.  This department's responsibility is to be sure you never have the same complaint twice.  Anyone can lodge a complaint with this department, even if not a Company employee.  Oddly enough, there is a panel to the south that leads directly to the First Aid station." );


  set_objects( 
 DIR+"/monsters/clerk.c", 
 DIR+"/monsters/officer.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x10y-30z0.c",
  "east" : DIR+"/rooms/city/x20y-20z0.c"
  ]) );
}
