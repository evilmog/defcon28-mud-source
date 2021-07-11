inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The waters here are rather fast-moving, but it's a little threat to you as it swiftly flows at your knee level. Still, the dark and narrow passageway is more than enough to keep you feeling insecure as long as you are in it. \nWaterway canals continue to the south and west." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y-20z-10.c",
  "west" : DIR+"/rooms/sewer/x30y-10z-10.c"
  ]) );
}
