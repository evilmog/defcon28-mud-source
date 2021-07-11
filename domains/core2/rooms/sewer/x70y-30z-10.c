inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "Moss on the surfaces of the pipe helps you move along, but the stream of water flowing beneath you further complicates travel and smell. It is rather dark here. \n\nThe large pipe continues to your east and west." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x80y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x60y-30z-10.c"
  ]) );
}
