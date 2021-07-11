inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Maintenance Access Point" );
  set_long( "You are at one of the fusion generator's maintenance access points. This place is where the reactor techs carry out maintenance work on the reactor like repairing and assuring that the proper reaction levels are reached. Anyone with sufficient tech skills can help maintain the generator via this access point. A large monitor in the wall shows the status of this access point." );


  set_objects( 
 DIR+"/monsters/tech.c", 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-30y50z0.c"
  ]) );
}
