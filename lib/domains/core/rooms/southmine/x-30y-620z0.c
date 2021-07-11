inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -620);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "Guard Barracks" );
  set_long( "Lets be honest, I'm using cookie cutter descriptions, they are really boring and you are tired of reading them. Supposedly some off duty guards hang out here, or whatever." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/southmine/x-40y-630z0.c"
  ]) );
}
