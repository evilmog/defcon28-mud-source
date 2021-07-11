inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 480);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The crowds seem to be thinning out, all you can see is zombies and vampires but no humans. The music sounds like robots fornicating." );


  set_objects( 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x480y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x470y-660z0.c"
  ]) );
}
