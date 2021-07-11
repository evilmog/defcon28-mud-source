inherit "/std/room";
inherit "/std/evil/quest7";

#include "../../domain.h"
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "%^RED%^The Roxbury%^RESET%^" );
  set_long( "%^BLUE%^A huge overturned semi lays in the middle of the room. Around it lay jagged linings of streets, and across one wall, a long row of tires makes up the bar! The inside of the bar looks exactly the way it would on another planet's busy intersection!  Doesnt it just blow your mind?%^RESET%^" );


  set_objects( 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/bouncer.c", 
 DIR+"/monsters/cagedancer.c", 
 DIR+"/monsters/cagedancer.c", 
 DIR+"/monsters/poledancer.c", 
 DIR+"/monsters/poledancer.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/nympho/x410y-690z0.c"
  ]) );
}

int do_search(void) {
  if (do_wallet()) {
    return 1;
  } else {
    return 0;
  }
}
