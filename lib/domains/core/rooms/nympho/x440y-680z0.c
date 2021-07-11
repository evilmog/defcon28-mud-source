inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 440);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "%^RED%^The walls are all covered in blood, the only light is a dim red overhead light. Dancers are throbbing to the loud music.%^RESET%^" );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/nympho/x430y-680z0.c",
  "northeast" : DIR+"/rooms/nympho/x450y-670z0.c"
  ]) );
}
