inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You find yourself knee-deep in sluggish sewage, groping around in the near-darkness of this waterway canal. The walls are narrow and you have to bend your body constantly to avoid hitting the low ceiling. \n\nYou can leave this canal system by going east. Otherwise, you may continue onwards to the south. " );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y30z-10.c",
  "east" : DIR+"/rooms/sewer/x20y40z-10.c"
  ]) );
}
