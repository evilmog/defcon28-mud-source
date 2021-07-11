inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "This surgical-looking room is how Company personnel move between the different levels of the sewers. It is plain except for its four blank stainless steel walls. \n\nIron rungs lead down. Alternatively, you may leave north into a main access tunnel. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-80z-10.c",
  "down" : DIR+"/rooms/sewer/x-10y-90z-20.c"
  ]) );
}
