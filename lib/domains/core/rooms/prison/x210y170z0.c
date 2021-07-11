inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", 170);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - South Transit" );
  set_long( "You have entered the CITY Detention Center for dangerous individuals.  The surgical steel of this corridor is kept spotless by around-the-clock surveillance and cleaning droids, while a large green stripe runs down the center of the corridor, heading towards the main bulk of the quad.  Two large Vaurgch guards stand at their posts here to prevent any unauthorized entry into the facility." );


  set_objects( 
 DIR+"/monsters/prisonguard.c", 
 DIR+"/monsters/prisonguard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prison/x210y210z0.c",
  "south" : DIR+"/rooms/east/x210y100z0.c"
  ]) );
}
