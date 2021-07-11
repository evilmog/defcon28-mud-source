inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Hallway" );
  set_long( "This is a hallway in the Detention Center bordering the detention cells.  A series of force field generators outlines the border between the hallway and the cells themselves.  Prison Director Brocke's office is due east of here, while the hallway continues to the south. " );

 set_exits( ([
  "south" : DIR+"/rooms/prison/x220y230z0.c",
  "east" : DIR+"/rooms/prison/x230y240z0.c",
  "southeast" : DIR+"/rooms/prison/x230y230z0.c"
  ]) );
}
