inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 420);
  set_property("y", -560);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "North Transit" );
  set_long( "Blue shaggy carpeting meets the dull grey cement as you come upon the best dome of all, the PleasureDome.  Inside there is plenty to do, but if you're leaving, we hope you will come back soon." );

 set_exits( ([
  "north" : DIR+"/rooms/southeastmasstransit/x420y-420z0.c",
  "south" : DIR+"/rooms/nympho/x420y-630z0.c"
  ]) );
}
