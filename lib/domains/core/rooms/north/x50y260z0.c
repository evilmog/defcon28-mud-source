inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "This steel corridor you are in seems to extend forever in an eternity of stainless steel. The walls, ceiling and floor of this area is made of steel, a situation which aggravates the heat problem here brought upon by a non-functional air-conditioner system and the reflectiveness of the steel surfaces.\n\nYou may continue to your north or your south." );


  set_objects( 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x50y270z0.c",
  "south" : DIR+"/rooms/north/x50y250z0.c"
  ]) );
}
