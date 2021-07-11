inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "Dark, smelly and very dirty, this a large sewage pipe you are in. The metal surface is crawling with moss and rust, and you know for sure that you'll be smelling like the sewers even after you've left it.\n\nThe pipe continues to the east. To the south the pipe exits into a service duct." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-80y40z-10.c",
  "east" : DIR+"/rooms/sewer/x-70y50z-10.c"
  ]) );
}
