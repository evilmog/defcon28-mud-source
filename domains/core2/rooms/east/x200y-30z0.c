inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Walkway" );
  set_long( "The walkway is sandwiched between very dense greenery, all of which is composed of plants both exotic and strange in nature. Illumination from the lightpanels above shed shadows as the light is blocked by the numerous leaves and scrubs. This results in the walkway being very dim, with just enough light to see where you're going.\n\nTo your north is the filtering area. A clearing can be reached by heading northwest." );


  set_objects( 
 DIR+"/monsters/monkey.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x200y-20z0.c",
  "northwest" : DIR+"/rooms/east/x190y-20z0.c"
  ]) );
}
