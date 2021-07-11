inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This is a bend in the service duct. Here, the light is brighter than the normal ducts and the walls actually wider apart from each other. You smell a whiff of stale air coming from the north.\n\nThe service duct extends north and west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x90y20z-10.c",
  "west" : DIR+"/rooms/sewer/x80y10z-10.c"
  ]) );
}
