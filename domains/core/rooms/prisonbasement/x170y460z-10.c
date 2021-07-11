inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", 460);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Monitoring Station" );
  set_long( "The monitoring station is the place where every single aspect of REACTOR ONE's condition is monitored. There are monitors depicting the current reaction rate, digital flowcharts showing inner hull integrity, temperature valves and even a small viewslot to see the reactor core. This station functions not only as an all-around information hub about the reactor, but it also serves as a back-up system on monitoring should any of the other stations fail.\n\nReactor decks lie to your east and south." );


  set_objects( 
 DIR+"/monsters/r1physicist.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1serviceman.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x170y450z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x180y460z-10.c"
  ]) );
}
