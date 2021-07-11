inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You do not know what is in the sewage all around you save the occasional glimpses of a floating powercell, but the stench here is almost overpowering. It seems that the trash all around you have been somehow compacted into this area, and the sewage gets even thicker to the southeast.\n\nThe main access tunnel continues to the west. The northeast primary hub is located to your southeast." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x20y50z-10.c",
  "southeast" : DIR+"/rooms/sewer/x40y40z-10.c"
  ]) );
}
