inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You are in a large pipe, one just large enough to fit your body inside. The small stream of drain water flowing at the bottom of the pipe seems to be the source of that horrible smell. Then again, it could well be the moss which you are using to help you move along the pipe. \n\nThe pipe exits to the north into a main access tunnel. You may continue to the west through the pipe." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x60y-50z-10.c"
  ]) );
}
