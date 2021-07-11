inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Financial District.  The paint on the walls appears to be peeling while the carpet looks to have been freshly replaced.\n\nAn access panel to the south leads to an office while the corridor appears to continue to the east and west." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x70y10z0.c",
  "east" : DIR+"/rooms/city/x80y20z0.c",
  "west" : DIR+"/rooms/city/x60y20z0.c"
  ]) );
}
