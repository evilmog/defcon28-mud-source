inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 470);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The halls of the nightclub seem to open up a bit here, the music gets a little louder and the partiers seem to be partying harder. The walls here are clean as if they have just been wiped down." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x470y-650z0.c",
  "south" : DIR+"/rooms/nympho/x470y-670z0.c",
  "northeast" : DIR+"/rooms/nympho/x480y-650z0.c"
  ]) );
}
