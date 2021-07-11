inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "This is yet more overgrown park, as if its creator doesn't really care about his own creation. Kindof how like stalingrad was a craphole this too is the dump of the game." );


  set_objects( 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x90y-40z0.c",
  "west" : DIR+"/rooms/city/x80y-30z0.c",
  "southwest" : DIR+"/rooms/city/x80y-40z0.c"
  ]) );
}
