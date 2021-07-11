inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Financial District, and it appears as if the floor is no longer carpeted and the wall is no longer painted.  The wall is now jet black titanium and the floor is stainless steel.  An access panel appears to lead to an unmarked room.  The corridor appears to continue to the west and east." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x40y10z0.c",
  "east" : DIR+"/rooms/city/x50y20z0.c",
  "west" : DIR+"/rooms/city/x30y20z0.c"
  ]) );
}
