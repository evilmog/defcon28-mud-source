inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The nightclub opens up a bit here and the music gets a little louder. Dancers can be seen all over the place." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x430y-660z0.c",
  "south" : DIR+"/rooms/nympho/x430y-680z0.c"
  ]) );
}
