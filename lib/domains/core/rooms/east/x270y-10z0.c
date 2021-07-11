inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 270);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Filing Department" );
  set_long( "Large filing cabinets constitute the bulk of this department's furniture. Due to the lack of warmth, this room is chillingly cold, and you can't help but shiver a little. A small white table is in a corner of the room, and you even notice a few chairs sitting around the place. \n\nClerical areas lie to your east and southwest." );


  set_objects( 
 DIR+"/monsters/eastfilingclerk.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/east/x280y-10z0.c",
  "southwest" : DIR+"/rooms/east/x260y-20z0.c"
  ]) );
}
