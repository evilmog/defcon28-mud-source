inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You find yourself in a large pipe, hardly able to fit your whole body inside. The walls of the pipe are circular and moss-covered. A slight stream of drain water flows at the bottom of the pipe. \n\nThe large pipe continues to the south and exits to your west." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x20y-60z-10.c",
  "west" : DIR+"/rooms/sewer/x10y-50z-10.c"
  ]) );
}
