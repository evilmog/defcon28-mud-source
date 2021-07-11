inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The waterway canal you are in is deeper than the rest. You are actually up to your waist in water. Still, the narrow and low passageway just threatens to engulf you should the water level ever rise, so you don't really feel secure about your location. \n\nThe waterway canal leads to higher ground located to your northeast and southwest." );


  set_objects( 
 DIR+"/monsters/constrictor.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x80y-60z-10.c",
  "southwest" : DIR+"/rooms/sewer/x60y-80z-10.c"
  ]) );
}
