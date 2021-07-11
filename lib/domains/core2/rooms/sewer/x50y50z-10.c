inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The stench here is greater than the common main access tunnels. Not only that, but you also notice that the sewage here is flowing more sluggishly than ever. You make a great effort to control your panic as you feel the waste shifting all round your body from your waist downwards.\n\nTo the southwest is the northeast primary hub. You can continue along the main access tunnel to the northeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x60y60z-10.c",
  "southwest" : DIR+"/rooms/sewer/x40y40z-10.c"
  ]) );
}
