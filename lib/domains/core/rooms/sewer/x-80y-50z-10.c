inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You seem to be in a large pipe, though there's hardly enough space for you to move around here. The pipe is quite dry, although you can find traces of moisture and slime here and there. \n\nYou can continue east inside the pipe. The pipe exits to the south into a waterway canal." );


  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-80y-60z-10.c",
  "east" : DIR+"/rooms/sewer/x-70y-50z-10.c"
  ]) );
}
