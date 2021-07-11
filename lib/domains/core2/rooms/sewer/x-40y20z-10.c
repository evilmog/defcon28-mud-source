inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Sluggish sewage waters engulf your knees. The dark and smelly passage is very narrow, barely able to fit you inside. Although this allows you to use the walls as a guide, being in such a cramped and confined space causes you to feel quite claustrophobic. \n\nThe waterway canal extends to the south and east." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-40y10z-10.c",
  "east" : DIR+"/rooms/sewer/x-30y20z-10.c"
  ]) );
}
