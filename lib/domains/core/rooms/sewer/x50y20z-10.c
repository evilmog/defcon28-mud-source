inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Waist-deep in sewer water, you strive to see what you can in the near darkness of this enormous main access tunnel. The slow-flowing sewage is miserably cold, not to mention the inhuman smell which is bubbling out of it.\n\nTo your north and south the main access tunnel continues." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y30z-10.c",
  "south" : DIR+"/rooms/sewer/x50y10z-10.c"
  ]) );
}
