inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "The steel walls buffeting the corridor you are in seems to be contributing to the already-heated up atmosphere here. Loud clangs resound all over as your footsteps fall heavily on the steel-plated floors.\n\nCorridors extend to the north and to the east. An old office seems to be to your west." );


  set_objects( 
 DIR+"/monsters/maintenancedroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x50y250z0.c",
  "east" : DIR+"/rooms/north/x60y240z0.c",
  "west" : DIR+"/rooms/north/x40y240z0.c"
  ]) );
}
