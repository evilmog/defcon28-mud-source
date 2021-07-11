inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 300);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "You are in a steel corridor, a corridor made completely out of steel. The light panels here seem to be a bit too bright for comfort, and the stainless steel walls just seem to aggravate the problem by reflecting the light. Each step you take echoes loudly all over the place, a situation caused by the steel plates which constitute as the corridors floor.\n\nA mass-transit station lies to your northwest. The corridor continues to your southeast." );


  set_objects( 
 DIR+"/monsters/northdomeguard.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/north/x0y310z0.c",
  "southeast" : DIR+"/rooms/north/x20y290z0.c"
  ]) );
}
