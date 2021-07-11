inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the CITY Financial District, and its walls appear to have been freshly painted while the carpet on the floor appears to be getting rather worn.\n\nAn access panel to the south leads to an office while the corridor continues to the east and west." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x60y10z0.c",
  "east" : DIR+"/rooms/city/x70y20z0.c",
  "west" : DIR+"/rooms/city/x50y20z0.c"
  ]) );
}
