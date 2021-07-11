inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "This is a long corridor with steel walls and steel plates for a floor. You feel rather hot here, a condition brought upon most probably by the errant air-conditioning system in this particular dome. You also notice that it is quite bright here.\n\nThis corridor extends to your west and to your north." );


  set_objects( 
 DIR+"/monsters/northdomeguard.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x60y230z0.c",
  "west" : DIR+"/rooms/north/x50y220z0.c"
  ]) );
}
