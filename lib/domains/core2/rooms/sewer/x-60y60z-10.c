inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The northwest primary hub, a raised wire-mesh platform in a main access tunnel which joins together four other main access tunnels. You are free of the sewage here, but the smell is inhuman, especially since there is a lot of accumulated trash and sewage directly below the platform. However, the domed ceiling is well-illuminated by many light panels, a brief respite from the dark and wet conditions of the other main access tunnels. \n\nMain access tunnels are located north, south, east and northeast." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y70z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y50z-10.c",
  "east" : DIR+"/rooms/sewer/x-50y60z-10.c",
  "northeast" : DIR+"/rooms/sewer/x-50y70z-10.c"
  ]) );
}
