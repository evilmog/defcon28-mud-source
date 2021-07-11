inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The stench of the sewers in this big access tunnel seems to be worse here. Apart from that, the flow of the sewage appears to be more sluggish, as if something is slowing the torpid stream of waste down. \n\nThe main access tunnel continues to the south. A waterway canal is to the west, while the northeast primary hub is to the northwest." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x50y20z-10.c",
  "west" : DIR+"/rooms/sewer/x40y30z-10.c",
  "northwest" : DIR+"/rooms/sewer/x40y40z-10.c"
  ]) );
}
