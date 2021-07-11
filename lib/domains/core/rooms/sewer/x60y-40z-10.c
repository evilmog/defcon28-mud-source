inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Waist-deep in the sewer waters of a main access tunnel, you can't help but wonder why you are floundering around in the near darkness of a stinking sewer drain. The tunnel may be large, but that still can't account for the horrible smell which seems to be originating from your west. \n\nThe southeast primary hub lies to the west, while the main access tunnel continues to the east. A ladder leads up to the City dome. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x70y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x50y-40z-10.c",
  "up" : DIR+"/rooms/city/x60y-40z0.c"
  ]) );
}
