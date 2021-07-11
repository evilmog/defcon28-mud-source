inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 40);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "Dull steel walls surround you in this access shaft. Your footsteps echo emptily across the shaft as you walk around here. This seems to be the bottom part of the access shaft.\n\nYou can return to the top level of the shaft by going up. Otherwise you can proceed northeast, northwest, southeast and southwest into what appears to be a very large pool of water." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x40y50z-20.c",
  "northwest" : DIR+"/rooms/sewer/x20y50z-20.c",
  "southeast" : DIR+"/rooms/sewer/x40y30z-20.c",
  "southwest" : DIR+"/rooms/sewer/x20y30z-20.c",
  "up" : DIR+"/rooms/sewer/x30y40z-10.c"
  ]) );
}
