inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You are standing knee-deep in the beginnings of a waterway canal, one of the many irrigation sub-systems of the City sewers. The current flow here is swift but not dangerous. However, the ceiling is rather low and the walls are narrow. \n\nThe waterway canal continues to the south. To the east is a main access tunnel." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y20z-10.c",
  "east" : DIR+"/rooms/sewer/x50y30z-10.c"
  ]) );
}
