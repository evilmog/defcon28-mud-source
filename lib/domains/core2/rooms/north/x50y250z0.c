inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Your footfalls echo along this corridor as you walk on the steel plates which constitute as the corridors loor. The bright lights above you bear down too brightly, making you wonder about light control in this dome. You also notice that it is very hot in here.\n\nCorridors lead to your north and south. The North Domes server rooms are to your east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x50y260z0.c",
  "south" : DIR+"/rooms/north/x50y240z0.c",
  "east" : DIR+"/rooms/north/x60y250z0.c",
  "west" : DIR+"/rooms/north/x40y250z0.c"
  ]) );
}
