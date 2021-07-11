inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sound of fast-flowing water is deafening here. You can actually feel an unnatural undercurrent pulling you towards the northwest of this main access tunnel. You can hardly believe that the smell of the sewers here is actually at a minimal level. \n\nThe southwest primary hub is located to your northwest. The main access tunnel extends to the southeast. " );


  set_objects( 
 DIR+"/monsters/shelledheptosquid.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x-50y-40z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-30y-60z-10.c"
  ]) );
}
