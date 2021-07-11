inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You find yourself at a T-junction of the waterway canals. Sewage water here is sent to wherever possible, and it's not at all surprising that you find yourself waist-deep in very fast-moving waters. \nExits to other waterway canals are to the north, east and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y0z-10.c",
  "east" : DIR+"/rooms/sewer/x30y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x10y-10z-10.c"
  ]) );
}
