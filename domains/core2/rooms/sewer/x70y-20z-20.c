inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You are in the middle of the underground atrium. Right above you, huge solar panels are beating artificial sunlight down onto the huge plants all around you. You notice that the leaves of the fern-like plants are rustling a little, as if there is a kind of draft somewhere here. The dark earthern path beneath you crunches with each step you take.\n\nPaths to your northeast, northwest, southeast and southwest all lead to the other parts of the atrium." );


  set_objects( 
 DIR+"/monsters/tangleweed.c", 
 DIR+"/monsters/tangleweed.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x80y-10z-20.c",
  "northwest" : DIR+"/rooms/sewer/x60y-10z-20.c",
  "southeast" : DIR+"/rooms/sewer/x80y-30z-20.c",
  "southwest" : DIR+"/rooms/sewer/x60y-30z-20.c"
  ]) );
}
