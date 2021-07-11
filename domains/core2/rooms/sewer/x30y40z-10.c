inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "A certain blankness fills this access shaft, mainly because it is totally featureless except for the four steel walls all around you. Somehow, you don't seem to be able to hear anything at all.\n\nIron rungs lead down into a lower sewer level. A service duct lies to your west." );


  set_objects( 
 DIR+"/monsters/monitor.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x20y40z-10.c",
  "down" : DIR+"/rooms/sewer/x30y40z-20.c"
  ]) );
}
