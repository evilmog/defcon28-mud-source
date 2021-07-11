inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 630);
  set_property("z", 0);

  add_area( "northmine" );
  set_short( "North Mine - Ruins" );
  set_long( "This was the center of the very busy north mine. Years ago there was an accident that caused a cave-in. The floors are covered in dust and junk and the walls are covered in dirt.\n\nThe mass-transit system continues north for some strange reason while south will take you back to CITY." );

 set_exits( ([
  "north" : DIR+"/rooms/northmine/x0y670z0.c",
  "south" : DIR+"/rooms/northmine/x0y590z0.c"
  ]) );
}
