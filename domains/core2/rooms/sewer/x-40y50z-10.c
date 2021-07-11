inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The service duct seem to stretch infinitely to your east and west. In the near-darkness, you try not to fall into too many slime patches. Even the walls are so dirty and grimy that you do not want to use them to guide yourself along the corridor. \n\nExits are to your east and west." );


  set_objects( 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y50z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y50z-10.c"
  ]) );
}
