inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Safety" );
  set_long( "Safety is always FIRST here at The Company, especially on a strange and potentially hostile planet.  There is no OSHA or similar agency when working off Earth, so this department does the best it can to ensure the safety of all Company employees." );


  set_objects( 
 DIR+"/monsters/jacob.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y-60z0.c"
  ]) );
}
