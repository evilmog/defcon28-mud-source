inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You find yourself in a large pipe. Slime and grime is all around you, and it's no doubt that dirty sewage water regularly pass through here. The smell's abominable, too. \n\nYou can exit the pipe to the east into a main access tunnel. Otherwise you may continue to your west." );

  add_item("pipe", "This is a pipe");
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-60y50z-10.c",
  "west" : DIR+"/rooms/sewer/x-80y50z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x80y50z-10.c",
  ]) );
}
