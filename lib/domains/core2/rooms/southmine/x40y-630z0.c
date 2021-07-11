inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -630);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Eastern Transit Station" );
  set_long( "This area isn't setup either, I'm too lazy to to do it, the mine code will likely be half baked. In theory this is supposed to be some sort of mass transit station hooked up to nothing, going nowhere, sorry.  I'm not really sorry though, you are probably reading this looking for deeper meaning because you really want a derbycon ticket. Good Luck." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/southmine/x0y-630z0.c",
  "southwest" : DIR+"/rooms/southmine/x30y-640z0.c"
  ]) );
}
