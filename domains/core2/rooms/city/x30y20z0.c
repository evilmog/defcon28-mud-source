inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Financial District.  To the south an access panel leads into a financial planner's office.  The corridor continues to the west and east." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x30y10z0.c",
  "east" : DIR+"/rooms/city/x40y20z0.c",
  "west" : DIR+"/rooms/city/x20y20z0.c"
  ]) );
}
