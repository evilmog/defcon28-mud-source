inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Here, the waterway canal's water level is only up to your ankles. But the extremely low ceiling causes you to bend your back further, while the very narrow walls leave very little place for you to move around. The darkness is almost complete, while the smell coming out from the sewage is quite unbearable. \n\nThe waterway canal deepens to your north and south." );


  set_objects( 
 DIR+"/monsters/greensnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y10z-10.c",
  "south" : DIR+"/rooms/sewer/x-30y-10z-10.c"
  ]) );
}
