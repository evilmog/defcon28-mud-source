inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "A clearing" );
  set_long( "This clearing seems to be relatively free of the exotic-looking plants of the atrium. The ceiling here towers over twelve feet high, with bright solar-panels illuminating the whole area. It does seem a mite warm, with the cement walkway beneath your feet feeling hot.\n\nA gust of foul-smelling air is coming from the direction the eastern cement path leads to. The plants seem to get thicker to your south and west. The walkway also extends to the southwest." );


  set_objects( 
 DIR+"/monsters/monkey.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x180y-20z0.c",
  "east" : DIR+"/rooms/east/x190y-10z0.c",
  "west" : DIR+"/rooms/east/x170y-10z0.c",
  "southwest" : DIR+"/rooms/east/x170y-20z0.c"
  ]) );
}
