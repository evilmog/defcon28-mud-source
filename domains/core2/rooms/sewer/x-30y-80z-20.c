inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "Solar panels beat artificial sunlight upon you, but most of the rays are lost, absorbed by the large fern-like plants. The foliage is very thick indeed, with you hardly being able to see beyond a few feet.\n\nThe underground atrium extends to the east. To your southwest is an access shaft." );


  set_objects( 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y-80z-20.c",
  "southwest" : DIR+"/rooms/sewer/x-40y-90z-20.c"
  ]) );
}
