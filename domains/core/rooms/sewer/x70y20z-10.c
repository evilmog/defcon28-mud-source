inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "All is silent as you walk along this service pipe. You try to be as quiet as possible, but it is hard to totally silence your already muffled footsteps. The nice thing about this duct is that you can see where you are going and that you are actually dry.\n\nThe service duct continues along the north and the south. A large pipe juts out from the eastern wall." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y30z-10.c",
  "south" : DIR+"/rooms/sewer/x70y10z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x80y20z-10.c",
  ]) );
}
