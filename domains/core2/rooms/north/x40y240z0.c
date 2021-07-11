inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Housing Records Office" );
  set_long( "This office was once used to facilitate the record-keeping of the North Domes residents. Now, with the advent of a new database system which makes the purpose of paper records obsolete, this office has fallen into disuse and has been abandoned and forgotten.\n\nThe exit is to the east. The housing records storage room is located to your south." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x40y230z0.c",
  "east" : DIR+"/rooms/north/x50y240z0.c"
  ]) );
}
