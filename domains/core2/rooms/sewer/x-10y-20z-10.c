inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The dark lighting is straining your eyesight as you try to make out as much as you can the service duct you are in. There appears to be a big amount of accumulated grime everywhere - on the floor, ceiling, walls and so on. Which probably explains the smell here. \n\nYou can leave via north and south." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-10z-10.c",
  "south" : DIR+"/rooms/sewer/x-10y-30z-10.c"
  ]) );
}
