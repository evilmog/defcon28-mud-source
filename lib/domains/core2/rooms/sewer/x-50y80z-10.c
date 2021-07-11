inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "You are at the top of an access shaft, one of the vertical passages built to allow movement between the different levels of the City sewers. The room is very plain and cold, being made of just steel and nothing else." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-60y80z-10.c"
  ]) );
}
