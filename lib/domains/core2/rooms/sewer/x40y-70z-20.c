inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -70);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You find yourself under a large canopy made out of leaves, a large cover which totally darkens the whole part of the atrium you are in. As thick as it is, small shafts of light burst through the overgrowth all around you, convincing you that there is very bright artificial light just above the canopy. \n\nPaths to the south and west take you to brighter parts of the atrium. The northeast and southeast paths lead you to parts of the atrium which are under the canopy." );


  set_objects( 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y-80z-20.c",
  "west" : DIR+"/rooms/sewer/x30y-70z-20.c",
  "northeast" : DIR+"/rooms/sewer/x50y-60z-20.c",
  "southeast" : DIR+"/rooms/sewer/x50y-80z-20.c"
  ]) );
}
