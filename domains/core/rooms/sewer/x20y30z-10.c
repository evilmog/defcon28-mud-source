inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This appears to be a dry duct, illuminated only by the red light panels on the ceiling. You can find your way around here without any problems, but the glare reflecting off the steel walls are kind of distracting. \n\nThis service duct continues to your north. A mass access tunnel is to your south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y40z-10.c",
  "south" : DIR+"/rooms/sewer/x20y20z-10.c"
  ]) );
}
