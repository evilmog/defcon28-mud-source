inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Hallway" );
  set_long( "This is a hallway in the Detention Center bordering the detention cells.  A series of force field generators outlines the border between the hallway and the cells themselves.  Prison Director Brocke's office is a bit north of here, while the hallway continues to the west.  If you're not incarcerated here, you can enter the prison cells to the east and visit an inmate if you want.  The security in the cells is top-notch, so there's no danger. " );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x220y230z0.c",
  "east" : DIR+"/rooms/prison/x230y220z0.c",
  "northeast" : DIR+"/rooms/prison/x230y230z0.c",
  "southwest" : DIR+"/rooms/prison/x210y210z0.c"
  ]) );
}
