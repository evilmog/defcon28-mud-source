inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "The walls of the walkway slant downwards, so that the ceiling is wider than the floor. Soft yellow lights brighten up the place, while a constant slight vibration goes through the entire walkway, a reminder that you are now walking just above the fusion generator.\n\nGoing east will lead you to the outer generator corridors. West will bring you further down the access walkway towards the monitoring center." );


  set_objects( 
 DIR+"/monsters/tech.c", 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-10y40z0.c",
  "west" : DIR+"/rooms/city/x-30y40z0.c"
  ]) );
}
