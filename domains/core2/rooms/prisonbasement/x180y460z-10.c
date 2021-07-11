inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 460);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Reactor Deck" );
  set_long( "You can only see the outer hull of the reactor, but the soft humming of the reactor and the slight vibration of the floor beneath you more than convinces you that this gigantic piece of machinery is working perfectly. The huge light plates above is blinding.\n\nThe rod control room is situated to your north. Going west will take you to the reactor's leak control station, while east leads to the monitoring station." );


  set_objects( 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1physicist.c", 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1radiologist.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x180y470z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x190y460z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x170y460z-10.c"
  ]) );
}
