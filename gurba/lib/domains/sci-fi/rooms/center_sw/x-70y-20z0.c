inherit "/std/room";
inherit "/domains/sci-fi/lib/ashop";
#include "../../domain.h" 

void setup( void ) {
  #include "area.h"

  set_property("x", -70);
  set_property("y", -20);
  set_property("z", 0);
  add_area( "center_sw" );

  set_short(do_short());
  set_long(do_long());


  set_objects( 
 DIR+"/monsters/abot_17_18.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/center_sw/x-70y-10z0.c"
  ]) );
}
