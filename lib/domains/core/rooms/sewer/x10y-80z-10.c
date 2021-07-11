inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This tunnel you are in may be vast, but the lack of light and the unknown dangers which lurk deep in the sewage waters you are currently waist-deep in give you a lot to worry about. Still, you take relief in the fact that not many creatures will want to live in a place as smelly as this. \n\nThe main access tunnel continues to the north. To the south is an access shaft. " );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-70z-10.c",
  "south" : DIR+"/rooms/sewer/x10y-90z-10.c"
  ]) );
}
