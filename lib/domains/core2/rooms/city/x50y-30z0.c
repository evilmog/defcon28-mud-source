inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "The lush foliage retreats here to allow room for small fruit plants. The sweet, pungent smell of lemons and mangoes is here. The stepping stone paths wagon wheel from here to the west, southwest and south.\n\nYou are able to hear the gurgle of the fountain to the southwest." );


  set_objects( 
 DIR+"/monsters/sparrow.c", 
 DIR+"/monsters/treelizard.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x50y-40z0.c",
  "west" : DIR+"/rooms/city/x40y-30z0.c",
  "southwest" : DIR+"/rooms/city/x40y-40z0.c"
  ]) );
}
