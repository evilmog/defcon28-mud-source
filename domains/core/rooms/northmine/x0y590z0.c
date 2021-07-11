inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 590);
  set_property("z", 0);

  add_area( "northmine" );
  set_short( "North Mine - Southern Transit Station" );
  set_long( "Despite the constant cleaning efforts, the maintenance crews have not been able to completely remove the mine soot that has been ground into the floor.  This can be none other than one of The Companys mine domes." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/captain.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/northmine/x0y630z0.c",
  "south" : DIR+"/rooms/northmasstransit/x0y420z0.c",
  "northwest" : DIR+"/rooms/northmine/x-10y600z0.c"
  ]) );
}
