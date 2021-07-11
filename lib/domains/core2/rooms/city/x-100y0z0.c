inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -100);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Mass-transit:  West" );
  set_long( "This is the west mass transit station within the CITY dome. The following are the destinations available to you:\n\n      West Sector ....................... west\n      Center CITY mass transit .......... east" );

 set_exits( ([
  "east" : DIR+"/rooms/city/x0y0z0.c",
  "west" : DIR+"/rooms/west/x-110y0z0.c"
  ]) );
}
