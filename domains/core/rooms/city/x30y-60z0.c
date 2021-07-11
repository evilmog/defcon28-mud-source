inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Interspecies Relations" );
  set_long( "This is a small, nondescript office set up in the space made by the removal of the Company cafeteria.  A table sits directly in the center of the room, with a large, rather crammed bookcase sitting against the far wall where the cafeteria entrance used to be.  A pretty young human girl paces the room, waiting for people to visit." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x20y-60z0.c"
  ]) );
}
