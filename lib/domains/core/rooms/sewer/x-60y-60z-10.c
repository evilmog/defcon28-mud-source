inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "You can feel the heat from the black metal shell of the incinerator located to your southeast. This must be the reason of the extreme dryness and hot condition of this deck. The wiremesh floor allows you to look down and see conveyor belts transporting trash to under the incinerator itself.\n\nYou can reach other decks by going east or south." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-60y-70z-10.c",
  "east" : DIR+"/rooms/sewer/x-50y-60z-10.c"
  ]) );
}
