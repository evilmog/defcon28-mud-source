inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -220);
  set_property("z", -10);

  add_area( "kore" );
  set_short( "Seldom Used Storeroom" );
  set_long( "You are standing in a dirty and damp storeroom, illuminated by a solitary bulb.  Shadows are cast about the room but you can see that this must be a storeroom for useless junk. The walls are smooth and plain except for the east wall which has a small access panel.  The access panel is standing open and you can see a narrow hallway leading off to the east.\n\nA clunky old turbolift leads up to the storage closet." );

 set_exits( ([
  "east" : DIR+"/rooms/kore/x210y-220z-10.c",
  "up" : DIR+"/rooms/kore/x200y-220z0.c"
  ]) );
}
