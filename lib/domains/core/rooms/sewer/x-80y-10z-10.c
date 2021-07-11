inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Dark, smelly and downright disgusting, this is the main access tunnel of the City sewers. You are in the middle of it, wading through the seemingly unending pile of refuse and body waste in the dark while at the same time attempting to maintain a cool composure. A shame the little lights by the sides of the tunnel can't show you just how huge this tunnel is.\n\nYou are at a turn in the main access tunnel. You can opt to continue southeast or northeast." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-70y0z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-70y-20z-10.c"
  ]) );
}
