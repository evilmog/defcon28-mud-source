inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "This large pipe is moss-encrusted, something which is not really bad as you find yourself using the moss to move along the otherwise rather slick pipe. A small stream of drain water flows at the bottom of the pipe. The stench of the sewers, as usual, permeates the air. \n\nThe large pipe continues to the east. The pipe exits at the west into a main access tunnel." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x70y-50z-10.c",
  "west" : DIR+"/rooms/sewer/x50y-50z-10.c"
  ]) );
}
