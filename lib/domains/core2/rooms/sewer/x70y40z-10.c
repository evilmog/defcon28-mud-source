inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This is a rather clean service duct. The air doesn't smell so much of the sewers, but somehow the steel surface of the walls have faded into a glimmerless shine. \n\nYou may leave via south or west to the other parts of this service duct." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x70y30z-10.c",
  "west" : DIR+"/rooms/sewer/x60y40z-10.c"
  ]) );
}
