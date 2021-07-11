inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "Tall grasses from the north shorten and then finally surrender to the sandy soil and dry air of this desert-like biozone. In fact, there is almost no vegetation here, except where a few cacti and sagebrush-type bushes have sprouted, becoming more dense towards the east.\n\nYou can see the west and south walls come together in a corner, although they are painted to resemble a desert landscape and horizon to minimize the effect.\n\nA fountain can be seen in the distance towards the northeast." );


  set_objects( 
 DIR+"/monsters/rattlesnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x30y-40z0.c",
  "east" : DIR+"/rooms/city/x40y-50z0.c",
  "northeast" : DIR+"/rooms/city/x40y-40z0.c"
  ]) );
 set_hidden_exits( ([
  "southeast" : DIR+"/rooms/city/x40y-60z0.c",
  ]) );
}
