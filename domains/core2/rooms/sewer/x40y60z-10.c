inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Hub #2" );
  set_long( "This is a very blue room, as the only source of illumination is from the walls which make up the corners of the room. An invisible air- conditioner circulates cool air all around you. Huge arches lead to your south, east and west. \n\nHydro generator chambers are to your south, east and west. Another hub is to your north." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y70z-10.c",
  "south" : DIR+"/rooms/sewer/x40y50z-10.c",
  "east" : DIR+"/rooms/sewer/x50y60z-10.c",
  "west" : DIR+"/rooms/sewer/x30y60z-10.c"
  ]) );
}
