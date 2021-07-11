inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Droid Bay 1" );
  set_long( "You are in a droid bay, the area where droids are stored when they are not on active duty. This room itself is large enough to contain ten droids, the usual number allocated for a droid type to a quarter of a dome. Various zones for each droid are on the floor, and you see a host of mechanical machinery specifically put here to maintain and recharge the droids.\n\nThe exit is to the south." );


  set_objects( 
 DIR+"/monsters/maintenancedroid.c", 
 DIR+"/monsters/maintenancedroid.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/north/x80y260z0.c"
  ]) );
}
