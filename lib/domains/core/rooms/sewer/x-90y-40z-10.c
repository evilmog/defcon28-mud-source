inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "ECC Corridor" );
  set_long( "The glaring bright light of the ceiling panels beat down upon you, but modern technology prevents heat from escaping from the panels. The result is a rather chilly white corridor with bright blinding light.\n\nCorridors extend to your north and east." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x-80y-40z-10.c"
  ]) );
}
