inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 160);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Heavy undergrowth" );
  set_long( "Unfamiliar plants and all manner of leaves and large ferns which you have not seen before envelope this area like a skin of greenery. The smell of earth is strong here, and the semi-darkness along with the drops of water condensing on the leaves all around lends this section of the atrium a certain coolness.\n\nThe exit is to the southeast." );


  set_objects( 
 DIR+"/monsters/monkey.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/east/x170y-20z0.c"
  ]) );
}
