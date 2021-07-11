inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Environmental Quality" );
  set_long( "The Company is very concerned about the cleanliness of the precious artificial environment it has created here on this planet. There is no monitoring equipment here because this is only an administrative office. A rather messy desk with overflowing ashtrays, a couple of chairs and a filing cabinet are the room's only furnishings." );


  set_objects( 
 DIR+"/monsters/billy.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x60y-20z0.c"
  ]) );
}
