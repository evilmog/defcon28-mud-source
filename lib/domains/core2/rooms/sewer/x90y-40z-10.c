inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This seems to be the end of the main access tunnel. Here, the sewage is actually up to your chest. The small lights by the sides of the tunnel are as illuminative as usual, while the stench seems to have gone up a notch or two here. You can't help but wonder what's that cold slimy thing floating between your legs... \n\n   A sewer passage lies to the north. The rest of the main access tunnels can be accessed via west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x90y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x80y-40z-10.c"
  ]) );
}
