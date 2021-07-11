inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The stench of the sewers seem to have gotten a strong and permanent hold on this service duct. You have trouble trying to breath properly here due to the strong smell, while just moving along is difficult due to the darkness and the slime-covered surfaces of the duct. \n\nThe service duct extends to your south and east." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-50y40z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y50z-10.c"
  ]) );
}
