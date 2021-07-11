inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 270);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "A bluish hue comes from the single blue stripe which adorns the walls of this corridor you are in. The corridor is rather bland otherwise.\n\nThe corridor continues to your south, west and northeast." );


  set_objects( 
 DIR+"/monsters/droid.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x270y-60z0.c",
  "west" : DIR+"/rooms/east/x260y-50z0.c",
  "northeast" : DIR+"/rooms/east/x280y-40z0.c"
  ]) );
}
