inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -590);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "westmine" );
  set_short( "West Mine - Eastern Transit Station" );
  set_long( "This is it...  the crown jewel in The Company's vast mining empire.  Of all the mining facilities in all of their colonies, none can compare to the riches found within the West Mine on the Hermes-571G colony!  Here can be found the rare spaceship fueling mineral corezite -- a mineral believed only to exist in theory and impossible to reproduce in a laboratory.  Yet by some freak of creation it has ended up here!  Due to the high financial risk posed by inexperienced miners causing accidents here, only the most skilled miners may extract corezite from the West Mine." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/westmasstransit/x-420y0z0.c",
  "west" : DIR+"/rooms/westmine/x-630y0z0.c",
  "southwest" : DIR+"/rooms/westmine/x-600y-10z0.c"
  ]) );
}
