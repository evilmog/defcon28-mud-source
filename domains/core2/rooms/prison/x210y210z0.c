inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", 210);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "City Detention Center" );
  set_long( "This is a hallway in the Detention Center bordering the detention cells.  A series of force field generators outlines the border between the hallway and the cells themselves.  The hallway continues to the west.  If you're not incarcerated here, you can enter the prison cells to the east and visit an inmate if you want.  The security in the cells is top-notch, so there's no danger. " );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x210y250z0.c",
  "south" : DIR+"/rooms/prison/x210y170z0.c",
  "east" : DIR+"/rooms/prison/x250y210z0.c",
  "west" : DIR+"/rooms/prison/x180y210z0.c",
  "northeast" : DIR+"/rooms/prison/x220y220z0.c",
  "northwest" : DIR+"/rooms/prison/x200y220z0.c",
  "southwest" : DIR+"/rooms/prison/x200y200z0.c"
  ]) );
}
