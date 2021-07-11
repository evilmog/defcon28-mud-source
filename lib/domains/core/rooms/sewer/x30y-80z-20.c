inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "All is quiet in this atrium, save the quiet rustling of the leaves all around you. There are little shadows around, a condition guaranteed by the glaring solar panels giving out ultra-violet light above you. Yet, the foliage is so thick that you can hardly see an arm's length ahead of you.\n\nFrom here, you may go east, southeast or southwest to the other parts of the atrium." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y-80z-20.c",
  "southeast" : DIR+"/rooms/sewer/x40y-90z-20.c",
  "southwest" : DIR+"/rooms/sewer/x20y-90z-20.c"
  ]) );
}
