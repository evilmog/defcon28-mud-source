inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Dry Alcove" );
  set_long( "Moss-encrusted, this old forgotten alcove is a small squarish room which seems to be some sort of hideout. Apart from the access shaft, this would be an ideal place for an amphibious creature to take as a ground-based habitat. The western wall here looks a little bit artificial." );

  add_item("western wall", "So much moss has grown here that the wall was apparently damaged over time. The western wall looks like it was hastility repaired, and looks somewhat weakened as a result. It may be possible to push the wall.");
  add_item("wall", "The walls of this alcove are moss-encrusted, due to the high moisture content in the air. The western wall looks different than the others.");
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y20z-20.c"
  ]) );
 set_hidden_exits( ([
  "push wall" : DIR+"/rooms/sewer/x0y30z-20.c"
  ]) );
}
