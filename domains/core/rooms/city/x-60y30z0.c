inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Maintenance Access Point" );
  set_long( "This maintenance access point is where reactor techs do their work. Duties related to maintenance work like reactor repair and reaction level upkeeping are all done here. A person with adequate tech skills can help with the maintenance work at this access point. On the wall is a large monitor which shows the current status of the generator at this access point." );


  set_objects( 
 DIR+"/monsters/tech.c", 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-50y30z0.c"
  ]) );
}
