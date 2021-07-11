inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -70);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "It is dark here, with your only source of illumination being the small shafts of light shining down through the thick foliage above you. The large canopy covering the path you're on seem pretty strange, as there doesn't seem to be anything helping it to grow better here. \n\nNorthwest and southwest take you to other parts of the atrium under the unnatural canopy. The southern path brings you to a brighter part of the atrium." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x50y-80z-20.c",
  "northwest" : DIR+"/rooms/sewer/x40y-60z-20.c",
  "southwest" : DIR+"/rooms/sewer/x40y-80z-20.c"
  ]) );
}
