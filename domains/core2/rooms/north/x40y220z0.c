inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Bright light panels illuminate this corridor, and the light is reflected back to you rather harshly by the steel walls which make up the corridor. Your feet makes loud noises on the steel floor, while you sweat on in the heat.\n\nYou may continue either to your east or west along this hot corridor." );

 set_exits( ([
  "east" : DIR+"/rooms/north/x50y220z0.c",
  "west" : DIR+"/rooms/north/x30y220z0.c"
  ]) );
}
