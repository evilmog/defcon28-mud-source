inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Bright illumination comes from the light panels above, lighting up your way more than necessary. Your feet clangs noisily on steel plates which make up the flooring, and you think that you sometimes hear steely echoes of your footsteps along the walls of this corridor.\n\nThe lobby is located to your south, while the corridor extends to your north." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x20y250z0.c",
  "south" : DIR+"/rooms/north/x20y230z0.c"
  ]) );
}
