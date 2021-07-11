inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 290);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Authority Checking" );
  set_long( "This office is where letters and other such documents have their authorization verified. A large noticeboard is on the eastern wall, covered with various pieces of papers. A table sits in a corner, the place where the clerical authorizer usually sits to do his work. Archways lead out to the other parts of the dome. \n\nYou may leave by going north and southwest." );


  set_objects( 
 DIR+"/monsters/clerk.c", 
 DIR+"/monsters/clerk.c", 
 DIR+"/monsters/eastauthorizer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x290y-10z0.c",
  "southwest" : DIR+"/rooms/east/x280y-30z0.c"
  ]) );
}
