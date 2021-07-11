inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY barracks" );
  set_long( "This is the location of the CITY's barracks, where the guards can sit, relax, and enjoy their days while waiting for their next call to duty.  There isn't much luxury in here, but there is enough for the essentials.  A table is in the middle of the room with some cards scattered across it, and a few chairs are circled around it.  Otherwise, nothing. The airlock hallway is to the west." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-50y-40z0.c"
  ]) );
}
