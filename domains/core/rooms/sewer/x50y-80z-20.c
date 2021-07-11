inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "The giant fern-like plants loom ominously over you. Here, the huge leaves seem to have grown over the path you are on, forming a small canopy over your head. You seem to be in darkness, although you know that above the canopy itself is the artificial sunlight provided by the solar panels. \n\nYou may leave by heading northeast and northwest." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/fern.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x60y-70z-20.c",
  "northwest" : DIR+"/rooms/sewer/x40y-70z-20.c"
  ]) );
}
