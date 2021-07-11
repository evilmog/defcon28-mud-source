inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Maintenance Operations" );
  set_long( "A large room with white walls, a white ceiling and a whiter floor, this is where the servicemen meet for their assignments and duty rosters. Most of the maintenance equipment are stored here, although they are not available for use to the public.\n\nThe exit is to the west." );


  set_objects( 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1serviceman.c", 
 DIR+"/monsters/r1radsensor.c", 
 DIR+"/monsters/r1radsensor.c", 
 DIR+"/monsters/r1zerky.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/prisonbasement/x160y430z-10.c"
  ]) );
}
