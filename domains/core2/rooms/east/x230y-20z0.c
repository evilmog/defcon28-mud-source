inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This corridor is one of many in the East housing dome, where approximately one fourth of the Company's employees live on Core.\n\nThe reception is to your east, while the corridor extends to your northwest." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x240y-20z0.c",
  "northwest" : DIR+"/rooms/east/x220y-10z0.c"
  ]) );
}
