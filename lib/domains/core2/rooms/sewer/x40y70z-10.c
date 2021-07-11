inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Hub #1" );
  set_long( "This is one of the hydro generator complex's hub, a room which is well-connected. This is room is illuminated only by the four soft blue walls which make up the corners of this room. A strong draft of cold air makes its rounds here every now and then. \n\nExits to other corridors are in the four main cardinal directions." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y80z-10.c",
  "south" : DIR+"/rooms/sewer/x40y60z-10.c",
  "east" : DIR+"/rooms/sewer/x50y70z-10.c",
  "west" : DIR+"/rooms/sewer/x30y70z-10.c"
  ]) );
}
