inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "Random plants of all kinds seem to be haphazardly planted here, the grass is overgrown and the bugs are all over here. It looks like somebody trashed the park and then spilled a bunch of random seeds wherever they could." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/fieldmouse.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x70y-40z0.c",
  "east" : DIR+"/rooms/city/x80y-50z0.c",
  "northeast" : DIR+"/rooms/city/x80y-40z0.c"
  ]) );
}
