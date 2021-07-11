inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "A large rectangular viewport embedded in the inner wall overlooks the generator. The walls, which are made out of some strange granite and alloy material, reflects the light from the round fluorescent lights in the ceiling.\n\nTo your east is a T-junction. North takes you to an office passage. Otherwise, you can head along the outer generator corridor to the southwest." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y80z0.c",
  "east" : DIR+"/rooms/city/x-40y70z0.c",
  "southwest" : DIR+"/rooms/city/x-60y60z0.c"
  ]) );
}
