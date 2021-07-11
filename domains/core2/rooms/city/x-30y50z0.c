inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Point Corridor" );
  set_long( "The entire corridor has been reinforced with antivib alloy, a special kind of metal which prevents vibrations from happening. Soft yellow lights illuminate the area from the ceiling.\n\nThe generator monitoring center lies to the southwest. To the north and east are maintenance access points where generator-related matters can be settled." );


  set_objects( 
 DIR+"/monsters/analyst.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-30y60z0.c",
  "east" : DIR+"/rooms/city/x-20y50z0.c",
  "southwest" : DIR+"/rooms/city/x-40y40z0.c"
  ]) );
}
