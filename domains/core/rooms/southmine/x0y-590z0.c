inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -590);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Northern Transit Station" );
  set_long( "This is the northern tip of the South Mine, famous for producing the more expensive metals demanded by the merchant shops." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/southmasstransit/x0y-420z0.c",
  "south" : DIR+"/rooms/southmine/x0y-630z0.c",
  "southeast" : DIR+"/rooms/southmine/x10y-600z0.c"
  ]) );
}
