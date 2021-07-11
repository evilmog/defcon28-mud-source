inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( " This is a dead-end to the main access tunnel. Here, the water is only ankle-deep, and the sewage here at a minimal level. Even the stench is not as strong as in the other access tunnels. A bright glow comes from the room to your south.\n\nThe main access transit goes on to the west. To your south is the entrance to the City sewers' hydro generator underground complex. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x30y80z-10.c",
  "west" : DIR+"/rooms/sewer/x20y90z-10.c"
  ]) );
}
