inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Small light panels by both sides of the main access tunnel do little to the darkness which shroud this large tunnel. You can't see the top of the ceiling, and neither can you see where the tunnel is leading you to. The sewage is both smelly and sticky, and you even notice the rare glimpses of a small skeleton here and there.\n\nTo your south is a service duct. The main access tunnel continues to your east and west. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y50z-10.c",
  "east" : DIR+"/rooms/sewer/x0y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y60z-10.c"
  ]) );
}
