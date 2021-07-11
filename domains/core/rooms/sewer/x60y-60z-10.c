inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You stand in a service duct, one of the passageways used to navigate around the City sewers while staying dry at the same time. It is lit by red emergency lights on the ceiling. Other than that, the plain walls are all that is to this duct. \n\nThe service duct extends to the east. A waterway canal lies to the south, while a main access tunnel is located to the west." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x60y-70z-10.c",
  "east" : DIR+"/rooms/sewer/x70y-60z-10.c",
  "west" : DIR+"/rooms/sewer/x50y-60z-10.c"
  ]) );
}
