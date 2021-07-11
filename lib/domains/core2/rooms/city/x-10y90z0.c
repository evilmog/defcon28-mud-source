inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 90);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "The hard cement floor you are walking on and the plain green-tiled walls indicate a lack of artistic design in this corridor. In fact, this office passage was made so that the higher level reactor crew would have a proper walkway." );


  set_objects( 
 DIR+"/monsters/droid.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/city/x0y100z0.c",
  "southwest" : DIR+"/rooms/city/x-20y80z0.c"
  ]) );
}
