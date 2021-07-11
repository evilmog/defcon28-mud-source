inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "Slimy moss helps you move along this otherwise smooth-surfaced pipe. It's kind of smelly here, a situation worsened by the small stream of drain water flowing at the bottom of the pipe. \n\nThis is a T-junction of sorts. The large pipe continues to the north and west. It promptly exits to the east into a main access tunnel. " );


  set_objects( 
 DIR+"/monsters/warrior.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y-60z-10.c",
  "east" : DIR+"/rooms/sewer/x50y-70z-10.c",
  "west" : DIR+"/rooms/sewer/x30y-70z-10.c"
  ]) );
}
