inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "This is a rather overgrown and invasive species filled park. Grass is 2 feet tall, the trees look like a charlie brown christmas tree and it is way too humid here." );


  set_objects( 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x90y-40z0.c",
  "west" : DIR+"/rooms/city/x80y-50z0.c",
  "northwest" : DIR+"/rooms/city/x80y-40z0.c"
  ]) );
}
