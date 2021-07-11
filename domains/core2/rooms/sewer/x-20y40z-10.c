inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Chemical Stabilization" );
  set_long( "Small green pipes by the sides of the tunnel dump a mixed variety of chemicals into the waterway here. This is the chemical stabilization area of the purification process tunnels, where the unstable waters caused by chemical purification earlier is stabilized via another mixture of liquids which counter the effects of the ionization and hazardous reactions. You actually have to watch your step to prevent yourself from getting hit by the chemicals pouring out of the pipes.\n\nEast takes you to a sluice. West takes you to the quality control centre of the purification process tunnels." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y40z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y40z-10.c"
  ]) );
}
