inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel:T-Junction" );
  set_long( "This is a T-junction in the main access tunnels. It is well-lit by the multiple light panels in the ceiling, but the waste materials seem to have accumulated here. Movement is rather hard, and you try to shut out your fears which surface from the many unseen things all around your body from the waist downwards. \n\nExits to the other main access tunnels are to the north, south and west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y70z-10.c",
  "south" : DIR+"/rooms/sewer/x10y50z-10.c",
  "west" : DIR+"/rooms/sewer/x0y60z-10.c"
  ]) );
}
