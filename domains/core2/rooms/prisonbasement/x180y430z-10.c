inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "REACTOR ONE Security Center" );
  set_long( "This is the hub of the security system of the reactor, the nerve center where all security measures are taken from and where all emergencies are processed. The walls are covered with monitors which show every single room in the reactor via hidden security cameras. A few consoles which control the security system are scattered all over the room. The cyclophants are usually found here when not on guard duty.\n\nYou may leave by going east." );


  set_objects( 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x190y430z-10.c"
  ]) );
}
