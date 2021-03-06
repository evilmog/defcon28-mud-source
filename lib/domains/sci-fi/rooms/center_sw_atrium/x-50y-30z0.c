inherit "/std/room";
inherit "/domains/sci-fi/lib/atrium";
#include "../../domain.h" 

void setup( void ) {
  #include "area.h"

  set_property("x", -50);
  set_property("y", -30);
  set_property("z", 0);
  add_area( "center_sw_atrium" );

  set_short(do_short());
  set_long(do_long());

 set_exits( ([
  "east" : DIR+"/rooms/center_sw_atrium/x-40y-30z0.c",
  "west" : DIR+"/rooms/center_sw_atrium/x-60y-30z0.c"
  ]) );
}
