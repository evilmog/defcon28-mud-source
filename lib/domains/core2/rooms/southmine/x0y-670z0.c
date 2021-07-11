inherit "/std/room";


#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Southern Transit Station" );
  set_long( "Ok look you are literally out in the sticks. There is supposed to be a mass transit node out here or whatever but its not hooked up to anything. Good luck searching for that ticket." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/southmine/x0y-630z0.c",
  "northwest" : DIR+"/rooms/southmine/x-10y-660z0.c"
  ]) );
}
