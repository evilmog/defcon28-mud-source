inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway - L Intersection" );
  set_long( "The hallway leading from the Starport to the central City complex takes a 90 degree turn here. The southern end of the hallway returns to the immigration area, while the eastern end leads towards the Starport shops eventually the City center itself." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x40y-80z0.c",
  "east" : DIR+"/rooms/city/x50y-70z0.c",
  "west" : DIR+"/rooms/city/x30y-70z0.c"
  ]) );
}
