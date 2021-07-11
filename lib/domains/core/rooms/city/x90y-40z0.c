inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "This really is a terrible park, its like the droids are on strike, the grass is overgrown, climate control went to hell." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/zombie.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x90y-30z0.c",
  "south" : DIR+"/rooms/city/x90y-50z0.c",
  "west" : DIR+"/rooms/city/x80y-40z0.c"
  ]) );
}
