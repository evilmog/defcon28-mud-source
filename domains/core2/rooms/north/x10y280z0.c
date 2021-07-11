inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Your footfalls echo all over the corridor, an after-effect of putting steel plates as flooring. The steel walls reflect the harsh lighting from the panels above, adding to the accumulated heat which has gathered here ever since the air-conditioning system of this dome went down.\n\nThe Public Relations Office of this dome is located to your north. Otherwise, you may continue east or south along this corridor." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x10y290z0.c",
  "south" : DIR+"/rooms/north/x10y270z0.c",
  "east" : DIR+"/rooms/north/x20y280z0.c"
  ]) );
}
