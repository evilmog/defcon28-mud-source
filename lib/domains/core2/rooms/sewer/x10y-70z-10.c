inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You stand in the middle of a long main access tunnel with the sewage here up to your waist. This is a dark tunnel, with the rather putrid smell threatening to destroy your sense of smell. The small lights by the sides of the tunnel offer little light for illumination. \n\nYou can go either north or south from this tunnel." );


  set_objects( 
 DIR+"/monsters/shelledheptosquid.c", 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x10y-80z-10.c"
  ]) );
}
