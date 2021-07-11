inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sewage here appears to be thicker, as if trash has been steadily accumulating here for a very long time. The darkness only serves to cause you to stumble around the waist-deep muck more, the small light panels by the sides of the tunnel not helping you at all. The size of this tunnel is emphasized by the fact that you can't see the high ceiling of it.\n\nThe northwest primary hub is located to your west. To your east the main access tunnel continues." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-40y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-60y60z-10.c"
  ]) );
}
