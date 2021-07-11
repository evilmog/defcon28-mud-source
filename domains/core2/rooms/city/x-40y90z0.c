inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 90);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Reactor Foreman's Office" );
  set_long( "You find yourself in an averagely-sized square room. Furniture is sparse here, limited only to the basic amenities like a table, chairs and some filing cabinets. The green-tiled walls, however, have been pasted over with various engineering charts and sketches about the reactor. It would seem that the reactor foreman is quite a busy person at the moment.\n\nThe exit is located to the south." );


  set_objects( 
 DIR+"/monsters/kendall.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-40y80z0.c"
  ]) );
}
