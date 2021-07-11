inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Citys Financial District.  The walls here appear to need new paint, while the carpet appears to have been recently replaced.  An access panel to the west leads to an office, while the corridor continues to the north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y50z0.c",
  "south" : DIR+"/rooms/city/x20y30z0.c",
  "west" : DIR+"/rooms/city/x10y40z0.c"
  ]) );
}
