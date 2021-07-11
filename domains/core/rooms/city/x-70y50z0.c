inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "This large circular corridor is brightly illuminated by the round fluorescent lights on the ceiling. The walls are curved, and some sort of unknown alloy. A large viewport in the inner wall overlooks the generator from above.\n\nA T-junction is located to your south. Otherwise, you can go northeast along the generator corridor." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-70y40z0.c",
  "northeast" : DIR+"/rooms/city/x-60y60z0.c"
  ]) );
}
