inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor" );
  set_long( "You stand at the western end of a long corridor which extends to the east. The walls around you have blue stripes in the middle of them which emit blue light. To your north and south are huge metal arches which tower high above you. They appear to lead into the hydro generator chambers. \n\nThe corridor you are in continues to the east. To your north and south are the hydro generator chambers." );


  set_objects( 
 DIR+"/monsters/drone.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y80z-10.c",
  "south" : DIR+"/rooms/sewer/x20y60z-10.c",
  "east" : DIR+"/rooms/sewer/x30y70z-10.c"
  ]) );
}
