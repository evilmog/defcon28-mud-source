inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Droid Bay 2" );
  set_long( "This is one of the North Domes northeastern quarters droid bay, the place where the droids are stored when they are not on duty. Ten zones are located here, enough to store ten droids when they are not working. This bay even has machinery for maintenance and repair purposes pertaining to droid-matters.\n\nYou may leave by going south." );


  set_objects( 
 DIR+"/monsters/maintenancedroid.c", 
 DIR+"/monsters/maintenancedroid.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/north/x60y260z0.c"
  ]) );
}
