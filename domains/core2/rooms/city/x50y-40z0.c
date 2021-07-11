inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Park Entrance" );
  set_long( "This small park is incredibly lush and is tended by many gardening drones. Vines and creepers climb to the mesh ceiling high above. A soft loam covers the ground, all but where stepping stones make a narrow path through the foliage.\n\nIt is very humid, but there is a cool breeze coming from unseen vents.\n\nA fountain can be heard to the west. The Starport exit is to the east." );


  set_objects( 
 DIR+"/monsters/mosquito.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x50y-30z0.c",
  "south" : DIR+"/rooms/city/x50y-50z0.c",
  "east" : DIR+"/rooms/city/x60y-40z0.c",
  "west" : DIR+"/rooms/city/x40y-40z0.c"
  ]) );
}
