inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "This is yet another access shaft evil mog forgot to put into the game, because he's lazy he will not be making a proper descriptions..." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-60y70z-10.c",
  "east" : DIR+"/rooms/sewer/x-50y80z-10.c"
  ]) );
}
