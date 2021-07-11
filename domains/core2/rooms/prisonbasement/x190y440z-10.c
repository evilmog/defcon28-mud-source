inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Reactor Deck" );
  set_long( "Just in front of you stand the outer hull of REACTOR ONE. It is huge, towering almost twenty feet into the air and descending to God knows how deep beneath the floor. Its circumference is so big that a few reactor decks like this one has to be built around it so that the reactor personnel can go around it to check its integrity.\n\nOther reactor decks are to your north and west. The reception area lies to the southeast." );


  set_objects( 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/r1engineer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x190y450z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x180y440z-10.c",
  "southeast" : DIR+"/rooms/prisonbasement/x200y430z-10.c"
  ]) );
}
