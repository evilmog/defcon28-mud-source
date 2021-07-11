inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "Plain steel walls surround you. The room is rather cold, and you kind of feel an occasional draft chilling you every now and then. A single light panel illuminates this otherwise dim room. \n\nIron rungs lead downwards. The alternative exit is to the east." );


  set_objects( 
 DIR+"/monsters/monitor.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-70y60z-10.c",
  "down" : DIR+"/rooms/sewer/x-80y60z-20.c"
  ]) );
}
