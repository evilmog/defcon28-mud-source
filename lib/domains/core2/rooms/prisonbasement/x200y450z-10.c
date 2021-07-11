inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 450);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "Thick cables and pipes adorn the ceiling and floor all around the circular passageway you're in. This tube-like corridor is rather dimly-lit, although the lighting is good enough to see where you're going.\n\nThe passageway extends to your north and to your south. To your west is one of the reactor decks of REACTOR ONE." );

 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x200y460z-10.c",
  "south" : DIR+"/rooms/prisonbasement/x200y440z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x190y450z-10.c"
  ]) );
}
