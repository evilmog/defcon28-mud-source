inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "House Listing And Assignment Office" );
  set_long( "This rather small office is surrounded by grey steel walls, and you can not help but wonder why the Company does not even try to make it more appealing. From what you gather, here is where a person could peruse the record list of those living in this dome.\n\nTo your north is the lobby." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x20y230z0.c"
  ]) );
}
