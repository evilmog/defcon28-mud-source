inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Your loud footsteps are magnified by the steel plates beneath you as you walk along this corridor. Everything here seems to be made of steel, right from the walls to the ceiling. All this metal is giving off a bad heat wave, especially with the air-conditioner system not working at the moment.\n\nThe corridor extends to the north, south and east" );


  set_objects( 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x20y270z0.c",
  "south" : DIR+"/rooms/north/x20y250z0.c",
  "east" : DIR+"/rooms/north/x30y260z0.c"
  ]) );
}
