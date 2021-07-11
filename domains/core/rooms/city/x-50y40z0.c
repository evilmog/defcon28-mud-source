inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "The access walkway you are in is directly over the City's fusion generator. The result is a constant vibration which permeates every fibre of your body as long as you are here. The walls here slant downwards, resulting in a wide ceiling and a rather narrow floor.\n\nTo the east is the monitoring center. West along the walkway will take you to the outer generator loop." );


  set_objects( 
 DIR+"/monsters/analyst.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-40y40z0.c",
  "west" : DIR+"/rooms/city/x-60y40z0.c"
  ]) );
}
