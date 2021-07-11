inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Knee-deep in cold sewage waters, you slowly move along the waterway canal. The narrow walls and low ceiling provide you a lot of chances of getting your body bruised in the dark. The smell of the sewers creep up on you from the foul water below, stinking your entire body most thoroughly.\n\nExits to other parts of the waterway canal are located south and east." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y10z-10.c",
  "east" : DIR+"/rooms/sewer/x0y20z-10.c"
  ]) );
}
