inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Store Corridor" );
  set_long( "This corridor has been thoroughly used by droids, judging from the track marks on the floor and the scratches on the walls. The smell of lubricant fluids is strong in the air, and you get the feeling that more droids than humans use this passageway.\n\nThe store corridor continues to your east. To your north is a droid bay." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x60y270z0.c",
  "east" : DIR+"/rooms/north/x70y260z0.c"
  ]) );
}
