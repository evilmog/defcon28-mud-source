inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are standing in a service duct. This appears to be an old duct, judging from the lack of reflection you see in the faded steel walls. It is lit well enough for you to notice the many little footprint marks on the otherwise unblemished floor.\n\nYou see a mass access tunnel to your west. The service duct extends to your north." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y20z-10.c",
  "west" : DIR+"/rooms/sewer/x50y10z-10.c"
  ]) );
}
