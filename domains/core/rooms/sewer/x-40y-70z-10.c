inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "Your throat is getting parched the longer you stay here. The large incinerator to your west is burning the place up, and the metal surroundings of this chamber is not helping at all. You can't help but notice the vastness of this chamber, or the fact that the incinerator is taking up almost the entire chamber. \n\nYou can continue to the other decks via north or south." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-40y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x-40y-80z-10.c"
  ]) );
}
