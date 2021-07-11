inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sounds of pouring waters echoes off the walls from somewhere. You pick your way through the waist-deep green and dark scum warily, the fear of suddenly stepping into an endless pit being at the forefront of your mind. The lights from the sides of this huge tunnel provide you little light. Then again, it's not that you want to see what sewage you are wading in. \n\nThe main access tunnel continues to your east and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x0y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y-40z-10.c"
  ]) );
}
