inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 0);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Sewer Tunnel" );
  set_long( "This sewer tunnel appears to be located on higher ground than the tunnels to your east, as the water here is only up to your ankles. A complex network of pipes run haphazardly above you, dripping only slightly here and there.\n\nThe sewer tunnel extends to the east. To your southwest is an access shaft." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x70y0z-20.c",
  "southwest" : DIR+"/rooms/sewer/x50y-10z-20.c"
  ]) );
}
