inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The roar of falling water is very loud here, and it seems to come from your west. You realize that the sewer waters here are flowing rather quickly to your west, the current almost sucking you with it. You actually see the amassed pile of sewage moving steadily to your west, as if being sucked by some tractor beam.\n\nTo your west lies the southwest primary hub. A service duct can be reached to the north, and the main access tunnel continues to the east. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-40y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x-30y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y-40z-10.c"
  ]) );
}
