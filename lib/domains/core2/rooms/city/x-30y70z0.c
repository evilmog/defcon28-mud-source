inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "A large rectangular viewport in the inner wall looks down upon the generator. The walls are curving here, without a single sharp edge. Coldness seep up from the hard floor beneath you, while bright light comes from the round white fluorescent lights embedded in the ceiling.\n\nA T-junction lies to the west, while the corridor continues to the southeast." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-40y70z0.c",
  "southeast" : DIR+"/rooms/city/x-20y60z0.c"
  ]) );
}
