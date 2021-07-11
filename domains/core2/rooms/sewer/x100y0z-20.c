inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", 0);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "You are in a cold, blank room with nothing to look at except for cold steel walls. The only feature this room displays is an iron ladder which goes upwards. \n\nThe ladder takes you to the top level of this access shaft. A smelly draft seems to be coming from your west." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x90y0z-20.c",
  "up" : DIR+"/rooms/sewer/x100y0z-10.c"
  ]) );
}
