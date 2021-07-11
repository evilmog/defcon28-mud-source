inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 270);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Steel walls, steel ceiling and steel floor all bear witness to your passing through this corridor. Bright lights above beat their almost-blinding light upon you, while the steel plates which constitute as the floor echo your footfalls all over the corridor.\n\nThe corridor extends to the north and south." );


  set_objects( 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x10y280z0.c",
  "south" : DIR+"/rooms/north/x10y260z0.c"
  ]) );
}
