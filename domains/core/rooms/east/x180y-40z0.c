inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Walkway" );
  set_long( "Lightpanels in the ceiling mutely illuminate this cement walkway. On both sides of the path are plants, all of which are unfamiliar to you. Above you, hanging below the lightpanels, is a crazy network of water sprinklers. The foliage partially obstructs the light from above, causing the walkway to appear dim.\n\nYou can feel a slight draft heading southeast. The plants seem to get thicker to your east and west, while a clearing lies to your northeast." );


  set_objects( 
 DIR+"/monsters/python.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/east/x190y-40z0.c",
  "west" : DIR+"/rooms/east/x170y-40z0.c",
  "northeast" : DIR+"/rooms/east/x190y-30z0.c",
  "southeast" : DIR+"/rooms/east/x190y-50z0.c"
  ]) );
}
