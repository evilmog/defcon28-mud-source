inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "The whole walkway is vibrating slightly, an effect caused by the reactions of the huge fusion generator directly beneath you. The soft yellow lights in the ceiling serve to illuminate your way.\n\nThe walkway you are on leads southwards to the center of the generator. North takes you back to the outer generator corridor." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y70z0.c",
  "south" : DIR+"/rooms/city/x-40y50z0.c"
  ]) );
}
