inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 470);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Partiers seem to be dancing the night away without a care in the world. Somehow they are all oblivious to the murderous clown in their midst. Even the zombies and vampires seem to have cleared out. There must be something about this clown." );


  set_objects( 
 DIR+"/monsters/evilclown.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/nympho/x470y-660z0.c",
  "northeast" : DIR+"/rooms/nympho/x480y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x460y-660z0.c"
  ]) );
}
