inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Citys Financial District, and its walls appear to have been freshly painted.  The carpet also looks to have been recently replaced, however it already has unknown dark stains on it.\n\nAn access panel to the west leads to a financial planners office, while the corridor continues to the north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y40z0.c",
  "south" : DIR+"/rooms/city/x20y20z0.c",
  "west" : DIR+"/rooms/city/x10y30z0.c"
  ]) );
}
