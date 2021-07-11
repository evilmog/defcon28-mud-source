inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 200);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CSCC security area" );
  set_long( "This is a large room, that is fashioned as a lobby of some sort. There is one large desk with a huge chair behind it.  There are two doors one to the northwest, and one to the south. This room has minimum lighting, enough to see well.  The floor is of dark blue tile, interlocked in such a way where a large CSCC in bright red appears in the center of the floor right in front of the desk.  Company logos are also along the walls in different languages." );


  set_objects( 
 DIR+"/monsters/cscccaptain.c", 
 DIR+"/monsters/csccagent.c", 
 DIR+"/monsters/csccagent.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/prison/x180y190z0.c",
  "northwest" : DIR+"/rooms/prison/x170y210z0.c"
  ]) );
}
