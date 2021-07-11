inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "Used mostly by higher level generator crew, the architect who designed the passage has sacrificed aesthetical values in favour of a more utilitarian look. The floor is made out of solid cement, while green-tiles make up the walls. There is nothing visually stunning about this corridor otherwise.\n\nThe reactor foreman's office lies to the north. You can also head east and west along the office passage." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y90z0.c",
  "east" : DIR+"/rooms/city/x-30y80z0.c",
  "west" : DIR+"/rooms/city/x-50y80z0.c"
  ]) );
}
