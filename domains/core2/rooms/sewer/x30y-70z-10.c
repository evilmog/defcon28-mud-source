inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You are in a large pipe which, in actual fact, is a rather tight fit around your body. Moss on the surfaces of the circular pipe enables you to move along quite well. A small stream of drain water flows at the bottom of the pipe.\n\nYou can continue along this large pipe either to the east or to the west." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y-70z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-70z-10.c"
  ]) );
}
