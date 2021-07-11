inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel : T-Junction" );
  set_long( "A T-junction in the main access tunnel. Most of the trash seems to have accumulated here, making wading through the sewage a lot more difficult. Although it is relatively brighter, you're not sure if you want to see what you are wading in now that you can. Now you know why it stinks so much here.\n\nMain access tunnel exits are to the south, east and west." );


  set_objects( 
 DIR+"/monsters/heptosquid.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y80z-10.c",
  "east" : DIR+"/rooms/sewer/x20y90z-10.c",
  "west" : DIR+"/rooms/sewer/x0y90z-10.c"
  ]) );
}
