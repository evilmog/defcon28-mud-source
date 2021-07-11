inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 460);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Partiers can be seen everywhere, the lights seem to be dim and the uv is really showing that this place needs a scrub down. The music is oh so re·pet·i·tive." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x470y-640z0.c",
  "west" : DIR+"/rooms/nympho/x450y-640z0.c"
  ]) );
}
