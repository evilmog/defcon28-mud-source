inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "You are standing on an incinerator deck just southwest of the huge incinerator itself. The effects of the heat are causing some very extensive shimmering of the vision all around you, a condition enhanced by the metal walls and wiremesh floor you are on. You are sweating a lot, and are having a slight problem breathing the hot air. The wiremesh floor allows you a view of the conveyor belts transporting trash to the incinerator.  \n\nThe other incinerator decks are located to your north and east." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y-70z-10.c",
  "east" : DIR+"/rooms/sewer/x-50y-80z-10.c"
  ]) );
}
