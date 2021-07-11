inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "The incinerator at your south is radiating heat, and you stand clear of it for fear of accidentally burning yourself against its hot black metal shell. Your lips are getting dryer the longer you stay around this area. The floor here consists of black metal plates which just seem to enhance the heat around you. \n\nTo your north is a dark secluded room with heavily-shielded walls, the incinerator control room. The other incinerator decks can be reached by going east or west. " );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y-60z-10.c",
  "west" : DIR+"/rooms/sewer/x-60y-60z-10.c"
  ]) );
}
