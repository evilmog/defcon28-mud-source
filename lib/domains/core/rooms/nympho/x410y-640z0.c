inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Entertainment District" );
  set_long( "To the southwest stand two enormous doors, and although they are pretty dull and unentertaining from this side, the excited murmur escaping from the other side leads you to believe something better.  To your northeast lies the Pleasure Dome center." );

 set_exits( ([
  "northeast" : DIR+"/rooms/nympho/x420y-630z0.c",
  "southwest" : DIR+"/rooms/nympho/x400y-650z0.c"
  ]) );
}
