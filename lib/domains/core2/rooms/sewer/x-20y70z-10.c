inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Exercise Area" );
  set_long( "The tell-tale goatish fetid stench is very strong here, and as you look around you realize why. The huge concrete blocks, the broken pipes pulled down from the ceiling and the many scratches all over the chamber indicate that this place was once used as an exercise area. You shiver to think of the kind of creature which uses these kind of equipment to work out. \n\nAn old passage lies to your west. The lair continues to your east." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y70z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y70z-10.c"
  ]) );
}
