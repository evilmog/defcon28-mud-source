inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "core" );
  set_short( "City Mass Transit Station: Center" );
  set_long( "You are at the exact center of the City Complex. The colony's X/Y/Z cartesian coordinate-based system centers on this exact location (X=0, Y=0, Z=0), so some of Core's locals simply refer to this room as 000.\n\nAll of the colony's administrative services are located within the City dome.  Outlying domes for housing, mines, recreation and the prison are connected via transparent mass-transit tubes.\n\nThe diagonal exits (se,sw,ne,nw) will take you to the respective quadrants with a listing of major services provided there.  The turbolift here will take you up to the dome's second floor." );

 set_exits( ([
  "north" : DIR+"/rooms/core/x0y100z0.c",
  "south" : DIR+"/rooms/core/x0y-100z0.c",
  "east" : DIR+"/rooms/core/x100y0z0.c",
  "west" : DIR+"/rooms/core/x-100y0z0.c",
  "northeast" : DIR+"/rooms/city/x10y10z0.c",
  "northwest" : DIR+"/rooms/city/x-10y10z0.c",
  "southeast" : DIR+"/rooms/city/x10y-10z0.c",
  "southwest" : DIR+"/rooms/city/x-10y-10z0.c",
  "up" : DIR+"/rooms/core/x0y0z10.c"
  ]) );
}
