inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Rather clean save for the little footprints on the floor, this service duct looks like it has been used as an accessway by the inhabitants of the City sewers. That could account for the rather uncharacteristic stench of the sewers in this particular duct.\n\nThe service duct you are in continues to the north and the south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y40z-10.c",
  "south" : DIR+"/rooms/sewer/x60y20z-10.c"
  ]) );
}
