inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The red overhead lights above you give this service duct a red glow, an effect amplified by the reflection of the lights against the steel walls of this corridor. You note a certain dryness about here. \n\nThe service duct extends to your south. To your east is an access shaft, while a waterway canal is located to your west. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x20y30z-10.c",
  "east" : DIR+"/rooms/sewer/x30y40z-10.c",
  "west" : DIR+"/rooms/sewer/x10y40z-10.c"
  ]) );
}
