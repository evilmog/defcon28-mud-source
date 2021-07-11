inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "The grass here is extremely green and the trees are tall and overgrown. It is extremely humid in here as if somebody hacked the climate control system. Random plans are all over the place." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x80y-40z0.c",
  "east" : DIR+"/rooms/city/x90y-30z0.c",
  "west" : DIR+"/rooms/city/x70y-30z0.c"
  ]) );
}
