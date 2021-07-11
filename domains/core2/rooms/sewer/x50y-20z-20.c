inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "The solar panels are providing a lot of artificial sunlight for the plants here, but strangely, you feel very little heat from them. The result is a very cool and humid atmosphere, something like what you would feel on a cold hilly area. The large fern-like plants seem to thrive in these conditions, judging from their huge size.\n\nPaths lead northeast and southeast to the other parts of this atrium." );


  set_objects( 
 DIR+"/monsters/fern.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x60y-10z-20.c",
  "southeast" : DIR+"/rooms/sewer/x60y-30z-20.c"
  ]) );
}
