inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This seems to be a pretty dark and smelly service duct. The walls, once grey, are now tainted with dark splotches of dirt and grime. The air here is stuffy, so you actually have to make an effort to breath. \n\nThe service duct extends to your east and west." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-30z-10.c"
  ]) );
}
