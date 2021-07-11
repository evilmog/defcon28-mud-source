inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Outfitters" );
  set_long( "This shop is subsidized by The Company and offers a small selection of protective clothing suitable for this colony. While not flashy by any stretch of the imagination, these clothes allow new workers to get outfitted and blend in with others on their mining shift." );


  set_objects( 
 DIR+"/monsters/abot_1_2.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x50y-70z0.c"
  ]) );
}
