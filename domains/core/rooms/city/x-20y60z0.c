inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "You are in the northeastern edge of the loop which goes around the fusion generator. The curving walls here are made out of a granite-alloy mixture. A large viewport in the inner wall looks down on the generator. This corridor is brightly illuminated by round white lights on the ceiling.\n\nYou can continue along the corridor by heading northwest or southeast. To your north is an office passage." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y70z0.c",
  "northwest" : DIR+"/rooms/city/x-30y70z0.c",
  "southeast" : DIR+"/rooms/city/x-10y50z0.c"
  ]) );
}
