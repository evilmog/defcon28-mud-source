inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small office and it appears to be very spartan.  The walls are cheaply painted white and the carpet looks old and worn.  There is a small wooden table and two chairs in the center of the room." );

  add_item("table", "This is a small wooden circular table with metal legs.  On it are several financial reports.");
  add_item("reports", "These appear to be printouts of various companies stock performance over the past months.");

  set_objects( 
 DIR+"/monsters/planner.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y20z0.c"
  ]) );
}
