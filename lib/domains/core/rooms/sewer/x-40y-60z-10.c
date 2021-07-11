inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "You stand on a deck at the northeastern corner of the incinerator. The black shell is giving off a lot of heat, and you find that you are sweating profusely here. The floor below you is just a wiremesh, and you get a chance to see a few conveyor belts transporting trash from somewhere to under the incinerator. \n\nMore incinerator decks can be reached to the south and west." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-40y-70z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y-60z-10.c"
  ]) );
}
