inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 110);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Housing Dome - West Mass-Transit" );
  set_long( "You have just entered housing dome #2 through an airlock. This dome is a bit smaller than the first but not as low-quality.  You see a conveyor belt ahead of you with its riders heading towards the central area." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x210y0z0.c",
  "west" : DIR+"/rooms/city/x100y0z0.c"
  ]) );
}
