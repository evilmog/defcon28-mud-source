inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The red glare of the emergency lights of the service duct's ceiling reflects off the dying glimmer of the stainless steel walls. You realize that this passage is rather dry." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x60y-60z-10.c",
  "northeast" : DIR+"/rooms/sewer/x80y-50z-10.c"
  ]) );
}
