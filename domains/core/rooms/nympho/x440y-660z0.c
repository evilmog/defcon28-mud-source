inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 440);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "VIP Entrance" );
  set_long( "Security guards appear to be stopping those not on the list. There is a velvet rope blocking off access to the VIP area." );


  set_objects( 
 DIR+"/monsters/vipbouncer.c", 
 DIR+"/monsters/vipbouncer.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x450y-660z0.c",
  "northwest" : DIR+"/rooms/nympho/x430y-650z0.c"
  ]) );
}
