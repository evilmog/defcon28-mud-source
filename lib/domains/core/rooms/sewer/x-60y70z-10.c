inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Large and ominous, the main access tunnel stretches far into the north and south. The lack of lighting prevents you from seeing much, and wading waist-deep in sewer muck, that handicap is pretty severe. Still at least the small light panels by the sides of the tunnel do provide you with a little lighting. \n\nThe tunnel continues to your north. To your south is the northwest primary hub. A service duct is to your west. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y80z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-70y70z-10.c"
  ]) );
}
