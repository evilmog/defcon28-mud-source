inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 270);
  set_property("y", -40);
  set_property("z", 0);
  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "A blue stripe runs along the entire length of this East dome corridor. Otherwise, it is pretty featureless, a quality which no doubt saves the Company on funds and decoration costs. \n\nThe dome's power room is located to your west, you can also head southwest along this corridor." );

 set_exits( ([
  "west" : DIR+"/rooms/east/x260y-40z0.c",
  "southwest" : DIR+"/rooms/east/x260y-50z0.c"
  ]) );
}
