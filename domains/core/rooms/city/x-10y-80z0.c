inherit "/std/room";
inherit "/domains/core/lib/office";
#include "../../domain.h" 

void setup( void ) {
  #include "area.h"

  set_property("x", -10);
  set_property("y", -80);
  set_property("z", 0);
  add_area( "city" );

  set_short(do_short());
  set_long(do_long());

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-80z0.c"
  ]) );
}
