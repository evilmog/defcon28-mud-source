inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -310);
  set_property("z", 0);

  add_area( "south" );
  set_short( "Section:  South End" );
  set_long( "The southern mining dome is located to the south.  The entrance to the housing area is back to the north.  Some tenants look at you nonchalantly.  You feel they know you do not belong here with them." );

 set_exits( ([
  "north" : DIR+"/rooms/south/x0y-210z0.c",
  "south" : DIR+"/rooms/southmasstransit/x0y-420z0.c"
  ]) );
}
