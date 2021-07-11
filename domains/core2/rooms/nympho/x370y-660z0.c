inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 370);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Gift Shoppe Ruins" );
  set_long( "Broken and bloody teddybears are all over the floor. The counters are a mess and you can see decapitated teddybear heads everywhere. Obviously somebody hates teddy bears." );

 set_exits( ([
  "east" : DIR+"/rooms/nympho/x380y-660z0.c"
  ]) );
}
