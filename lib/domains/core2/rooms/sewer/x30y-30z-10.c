inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "As dry as it could be, this service duct appears to be rather unused. You detect a thin layer of fine dust over its walls and floor. Even the stainless steel surface of the duct has lost its glimmer. \n\nThe service duct extends to the east and the west." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-30z-10.c"
  ]) );
}
