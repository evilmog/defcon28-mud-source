inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "With its high ceiling and wide width, the small lights by the sides of the tunnel do little to illuminate the whole place. Still, they are enough for you to get around. You therefore find yourself wading through an assorted pile of trash which you can hardly see. \n\nYou may proceed onwards via the main access tunnel to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y90z-10.c",
  "west" : DIR+"/rooms/sewer/x10y90z-10.c"
  ]) );
}
