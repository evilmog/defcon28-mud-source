inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Bio Engineering Lab" );
  set_long( "An extension of the Vegetation Lab to the west, this room once was the Bio Engineering Lab for the atrium complex. A button is on the wall. All of the creatures placed in Shay Park were originally developed right here in this room. Now it is a breeding ground for the vile rodents that took over after the work was completed and the lab was abandoned." );

  add_item("button", "This is a large purple button, it says 'PRESS ME'");

  set_objects( 
 DIR+"/monsters/atriumrat.c", 
 DIR+"/monsters/atriumrat.c", 
 DIR+"/monsters/queenrat.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x50y-60z0.c"
  ]) );
}
