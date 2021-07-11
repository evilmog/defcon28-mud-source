inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 450);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "VIP Booth" );
  set_long( "This is a dark booth, a round table is in the center. The music is quieter here which makes it the perfect place for a conversation. Footprints can be seen on the floor." );


  set_objects( 
 DIR+"/monsters/agent.c" 
);
 set_exits( ([
  "northeast" : DIR+"/rooms/nympho/x450y-660z0.c"
  ]) );
}

int do_search(void) {
   this_environment()->setup();
   return 1;
}
