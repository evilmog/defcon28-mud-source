inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "White fluorescent lights in the ceiling brightly illuminate the corridor you are in. The walls, made out of a mixture of granite and some alloy unknown to you, reflect the light nicely, further brightening the place up. A viewport in the inner wall provides you with a view of the generator.\n\nTo the east lies a T-junction, while the corridor extends to the northwest." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-40y10z0.c",
  "northwest" : DIR+"/rooms/city/x-60y20z0.c"
  ]) );
}
