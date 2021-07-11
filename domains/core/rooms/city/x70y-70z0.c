inherit "/std/room";
inherit "/domains/core/lib/office";
#include "../../domain.h" 

void setup( void ) {
  #include "area.h"

  set_property("x", 70);
  set_property("y", -70);
  set_property("z", 0);
  add_area( "city" );

  set_short(do_short());
  set_long(do_long());

 set_exits( ([
  "north" : DIR+"/rooms/city/x70y-60z0.c"
  ]) );
}
