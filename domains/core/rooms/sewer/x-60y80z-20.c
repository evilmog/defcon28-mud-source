inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The thick sewage you're wading waist-deep in impedes your passage, and the situation is made worse by the lack of light in this extremely large main access tunnel. The smell here is sickening, with all those bubbles rising up from the dark waters you're in. You wonder what's in the sewage besides the regular depleted powercell and food wrappers which you see.\n\nYou may continue south down the main access tunnel. To your east is an access shaft." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-60y70z-20.c",
  "east" : DIR+"/rooms/sewer/x-50y80z-20.c"
  ]) );
}
