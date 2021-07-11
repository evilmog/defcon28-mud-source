inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 10);
  set_property("z", 0);

  door_closed = 1;
  locked = 1;
  key = "corekey";
  add_area( "city" );
  add_block("east");  set_short( "Outer Generator Corridor" );
  set_long( "A large rectangular viewport in the inner wall overlooks the generator. The walls here are made out of a strange mixture of granite and alloy, resulting in a very hard and rough kind of material. Round white fluorescent lights in the ceiling illuminate your surroundings.\n\nWest will take you to a T-junction, while northeast will take you along the outer generator corridor. To your east is a storeroom." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y10z0.c",
  "west" : DIR+"/rooms/city/x-40y10z0.c",
  "northeast" : DIR+"/rooms/city/x-20y20z0.c"
  ]) );
}
