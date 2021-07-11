inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Waist-deep in the filth-filled sludge, you move through this main access tunnel slowly. The only illumination here is provided by the small lights alongside the tunnel, but even they are not enough fully allow you to see what you are wading in. Somehow, that could also be a blessing in disguise.\n\nThe main access tunnel continues to the north and south." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y80z-10.c",
  "south" : DIR+"/rooms/sewer/x10y60z-10.c"
  ]) );
}
