inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "You are at the bottom level of an access shaft. Plain steel walls are on all sides of you, and this room is featureless apart from the iron ladder leading up. \n\nYou can head up to the top level of this shaft, or go northeast into what looks like a broken cage." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x40y-50z-20.c",
  "up" : DIR+"/rooms/sewer/x30y-60z-10.c"
  ]) );
}
