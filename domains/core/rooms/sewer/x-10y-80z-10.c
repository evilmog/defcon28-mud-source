inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You are at the southeastern end of the main access tunnel. Here, the amount of waste matter in the sewage waters is chest-high, so all you can is just move around sluggishly from one far end of the large dark tunnel to another \n\nThe main access tunnel continues to your northwest. To your south is an access shaft, while a waterway canal is to your north." );


  set_objects( 
 DIR+"/monsters/wasteworm.c", 
 DIR+"/monsters/wasteworm.c", 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-70z-10.c",
  "south" : DIR+"/rooms/sewer/x-10y-90z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-20y-70z-10.c"
  ]) );
}
