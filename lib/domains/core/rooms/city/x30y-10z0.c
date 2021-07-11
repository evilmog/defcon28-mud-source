inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Supply Distribution Logistics" );
  set_long( "Behold the brains behind getting ink pens and paper clips to even the farthest reaches of Core.  Piles of requisition forms reach towards the ceiling, defying gravity and many fundamental theories of structural engineering." );


  set_objects( 
 DIR+"/monsters/biddleman.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x30y-20z0.c"
  ]) );
}
