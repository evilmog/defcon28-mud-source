inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor" );
  set_long( "This is the main corridor of the southwestern quadrant of the city dome. An Armour shop is to the west and east." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y-60z0.c",
  "south" : DIR+"/rooms/city/x-20y-80z0.c",
  "east" : DIR+"/rooms/city/x-10y-70z0.c",
  "west" : DIR+"/rooms/city/x-30y-70z0.c",
  "down" : DIR+"/rooms/sewer/x-20y-70z-10.c"
  ]) );
}
