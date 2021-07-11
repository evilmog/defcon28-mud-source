inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You are in a large pipe, just big enough to fit you inside. The smell here is very bad, and you realize that sewage water is trickling along at the bottom of the pipe.\n\nThe pipe exits into a service duct to your north. Otherwise you may continue south inside the pipe." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y40z-10.c",
  "south" : DIR+"/rooms/sewer/x-70y20z-10.c"
  ]) );
}
