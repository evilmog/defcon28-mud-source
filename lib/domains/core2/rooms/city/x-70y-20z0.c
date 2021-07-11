inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southwest Corridor: Entrance to Human Resources" );
  set_long( "This is the western end of the main southwest corridor. There is an access panel to the west that leads to the sprawling Human Resources department.\n\nTo the east this corridor continues infinitely. \n\nThere is a manhole here that leads down to the sewers." );

 set_exits( ([
  "east" : DIR+"/rooms/city/x-60y-20z0.c",
  "west" : DIR+"/rooms/city/x-80y-20z0.c",
  "down" : DIR+"/rooms/sewer/x-70y-20z-10.c"
  ]) );
}
