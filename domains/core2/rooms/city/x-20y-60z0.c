inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor" );
  set_long( "This is the main corridor of the southwestern quadrant of the city dome.\nAn armour shop is to the east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y-50z0.c",
  "south" : DIR+"/rooms/city/x-20y-70z0.c",
  "east" : DIR+"/rooms/city/x-10y-60z0.c",
  "west" : DIR+"/rooms/city/x-30y-60z0.c"
  ]) );
}
