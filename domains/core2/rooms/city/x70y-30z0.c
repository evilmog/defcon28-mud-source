inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "The floor here is covered in some kind of alien grass and there are various plants all over the place. This park is in serious need of a weeding as invasive plant species are all over the place." );


  set_objects( 
 DIR+"/monsters/iguana.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x70y-40z0.c",
  "east" : DIR+"/rooms/city/x80y-30z0.c",
  "southeast" : DIR+"/rooms/city/x80y-40z0.c"
  ]) );
}
