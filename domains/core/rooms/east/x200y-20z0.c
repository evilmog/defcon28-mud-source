inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Filtering Area" );
  set_long( "The cement path comes to an end here. Plants and small trees grow abundantly here, but the dense foliage cannot hide the large bulky air filters which have been fastened securely to the eastern wall. Because of the filters, the leaves and some of the softer-vined plants in this area are in a perpetual state of rustling.\n\nYou can leave by heading south." );


  set_objects( 
 DIR+"/monsters/boar.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x200y-30z0.c"
  ]) );
}
