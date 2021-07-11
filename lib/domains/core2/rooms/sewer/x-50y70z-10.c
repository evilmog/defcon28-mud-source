inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "High endless ceilings, wide widths, thick sewage and bad lighting make up this main access tunnel. You find yourself in dark brown and smelly waste as you wade waist-deep through here, making the best of the illumination offered by the small light panels by the sides of the big tunnel. \n\nThe northwest primary hub lies to your southwest. To your northeast the main access tunnel continues." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-40y80z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-60y60z-10.c"
  ]) );
}
