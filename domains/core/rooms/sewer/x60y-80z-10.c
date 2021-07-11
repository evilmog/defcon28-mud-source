inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The stench of the sewers is enhanced here due to the narrow confines of the canal. You don't feel too comfortable here, knowing well that the slightest rise in water could very well drown you. \n\nYou may continue onwards to other canals to the north and northeast." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y-70z-10.c",
  "northeast" : DIR+"/rooms/sewer/x70y-70z-10.c"
  ]) );
}
