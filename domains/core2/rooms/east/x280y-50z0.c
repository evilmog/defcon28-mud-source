inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Droid Power Station" );
  set_long( "The droid power station is the place where the droids recharge their internal power supply via direct connection cables to the domes power supply. Cylindrical tanks marked with the words %^BOLD%^C26-B %^RESET%^hang from the ceiling. You see a lot of tubes and cables all over the room.\n\nYou may leave by going south." );


  set_objects( 
 DIR+"/monsters/powerdrone.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x280y-60z0.c"
  ]) );
}
