inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Living Stats Department" );
  set_long( "The living stats department is an automated room where life detectors work alongside statistic programs to produce a detailed report of the East domes inhabitants every month. This report is automatically generated every month unless it is requested earlier.\n\nA corridor connecting to other parts of the East dome lies to your north. To your east is the domes public relations office, while to your southwest is the dome managers secretary." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x240y-30z0.c",
  "east" : DIR+"/rooms/east/x250y-40z0.c",
  "southwest" : DIR+"/rooms/east/x230y-50z0.c"
  ]) );
}
