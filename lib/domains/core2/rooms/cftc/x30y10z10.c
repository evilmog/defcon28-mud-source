inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 10);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Milkitrade: President Wellin's Office" );
  set_long( "The office of Milkitrade President Wellin.  A mahogany desk faces you, a leather chair behind it.  A comfortable looking maroon, cloth couch is on the south wall.  A few bookcases sit against the walls of the room separated by inexpensive paintings.\n\nThe eastern door leads back to the lobby." );


  set_objects( 
 DIR+"/monsters/wellin.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/cftc/x40y10z10.c"
  ]) );
}
