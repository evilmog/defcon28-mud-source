inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 460);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Loud music is playing here. People seem to be dancing and enjoying it. Some zombies appear to be eating a humans flesh while the human is still alive and the human is doing nothing about it. There must be something in the air here." );


  set_objects( 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/nympho/x450y-680z0.c",
  "northeast" : DIR+"/rooms/nympho/x470y-670z0.c"
  ]) );
}
