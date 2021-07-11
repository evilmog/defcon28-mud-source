inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "You are walking along an access walkway which is just above the City's fusion generator. A slight vibration, caused by the reactions in the generator, hums constantly throughout the entire walkway.\n\nDirectly to the north lies the monitoring center. Going south along the walkway will eventually take you out to the outer generator loop." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y40z0.c",
  "south" : DIR+"/rooms/city/x-40y20z0.c"
  ]) );
}
