inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Waist-deep in discarded wastepaper, soiled toiletpaper, depowered powercells and a lot other things you don't want to identify, you slowly wade across this enormous tunnel, guided by the small lights by the sides of the tunnel. The stench is almost suffocatingly unbearable, and you make an effort to hold your stomach together. \n\nThe main access tunnel stretches to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y50z-10.c",
  "west" : DIR+"/rooms/sewer/x10y50z-10.c"
  ]) );
}
