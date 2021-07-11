inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Main Control Center" );
  set_long( "Manned mostly by reactor engineers, the main control center is the heart of all operations in the reactor. Every other division is kept under a watchful eye here, and all reports will go through this center before they are sent to the reactor supervisor. Various screens show the status of each other division which the engineers will check every now and then to see if everything is running smoothly. All assignments are also sent to the other divisions from here. \n\nTo the north and east are reactor decks. A tube passageway can be reached by going west." );


  set_objects( 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1physicist.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x170y450z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x180y440z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x160y440z-10.c"
  ]) );
}
