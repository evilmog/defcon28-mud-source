inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 480);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Shenanigans abound there seems to be no zombies, or vampires. You can't quite tell if the clown is gone though. The music appears to be a techno circus remix and its definitely creeping you out." );


  set_objects( 
 DIR+"/monsters/evilclown.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/nympho/x480y-650z0.c",
  "west" : DIR+"/rooms/nympho/x470y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x470y-650z0.c"
  ]) );
}
