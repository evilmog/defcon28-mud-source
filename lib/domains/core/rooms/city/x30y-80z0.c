inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Colony Customs Office" );
  set_long( "A stark contrast from the chaos in the hallway outside, this room is well-organized and tidy. A row of Metalic chairs are securely bolted to the floor (probably to prevent them from rattling due to the engine vibrations whenever shuttles land or depart). The walls are lined with the typical propaganda posters one might expect to see in any government office." );


  set_objects( 
 DIR+"/monsters/lulams.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x40y-80z0.c"
  ]) );
}
