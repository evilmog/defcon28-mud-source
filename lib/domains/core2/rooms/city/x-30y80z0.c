inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "Long rectangular lightpads run along the ceiling of this corridor, providing good illumination. Since this passage doesn't really see much traffic, plain green tiles make up the walls, and the floor has just been covered with cement. Although rather drab, you get the impression that this is a very secure passage in terms of structural integrity.\n\nThis passage stretches to the east and the west." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y80z0.c",
  "west" : DIR+"/rooms/city/x-40y80z0.c"
  ]) );
}
