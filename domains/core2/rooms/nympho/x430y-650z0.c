inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Dirty Nightclub" );
  set_long( "The lights are down low and you can barely see anything. The walls are narrow and it feels cramped. Party goers are dancing everywhere and loud repetetive club music makes it impossible to hear." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x430y-640z0.c",
  "south" : DIR+"/rooms/nympho/x430y-660z0.c",
  "southeast" : DIR+"/rooms/nympho/x440y-660z0.c"
  ]) );
}
