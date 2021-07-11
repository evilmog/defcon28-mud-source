inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 0);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Sewer Tunnel" );
  set_long( "The network of pipes above your head seem to be rather intricate. You can not believe that you are deep in sewage inside a tunnel which could be flooded by the leaking pipes at any time.\n\nThe sewer tunnel continues to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x90y0z-20.c",
  "west" : DIR+"/rooms/sewer/x70y0z-20.c"
  ]) );
}
