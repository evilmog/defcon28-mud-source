inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "Mold-encrusted walls surround you in this narrow water tunnel. The sewage is up to your feet here, but you're relatively sure that it will rise higher should the sewers water level get higher.\n\nYou may continue north or south in this water tunnel." );


  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y40z-10.c",
  "south" : DIR+"/rooms/sewer/x-90y20z-10.c"
  ]) );
}
