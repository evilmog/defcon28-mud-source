inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "This is a large pipe. Its circular steel walls remind you of mass-transit tubes, only this is much smaller. Movement here would have been harder if not for the moss covering most of the pipe's surfaces.\n\nThe pipe continues to the south. To the north, the pipe ends into what appears to be some sort of lair..." );


  set_objects( 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/warrior.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y-50z-10.c",
  "south" : DIR+"/rooms/sewer/x40y-70z-10.c"
  ]) );
}
