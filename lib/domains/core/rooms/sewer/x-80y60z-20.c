inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "You are in a very brightly-lit access shaft. The steel walls seem to be shining, reflecting the bright glare of the light panel above you all around. \n\nGoing up takes you to the top level of the access shaft. You see holding pens of some sort to your south and east." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-80y50z-20.c",
  "east" : DIR+"/rooms/sewer/x-70y60z-20.c",
  "up" : DIR+"/rooms/sewer/x-80y60z-10.c"
  ]) );
}
