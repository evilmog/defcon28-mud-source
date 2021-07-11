inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You appear to be in a very dark part of the service duct. The only source of light here seems to be coming from the other parts of the service duct to your north and west. Puddles of water are all over the place, not to mention the ever-present stench of the sewage. \n\nExits are located to the north and west." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-20z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y-30z-10.c"
  ]) );
}
