inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You can hear the echoes of rushing waters somewhere, but can't really place them anywhere definite. The bubblingly smelly sewer waters you are in are best described as relatively slow-moving towards your northwest. There doesn't seem to be any end to the darkness which is the main access tunnel of the City's sewers. \n\nYou are in the middle of a main access tunnel which stretches from your northwest to your southeast. To your south is a service duct. " );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-30y-70z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-40y-50z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-20y-70z-10.c"
  ]) );
}
