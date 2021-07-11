inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 50);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "This appears to be a large underground lake. The ceiling is high up above you, with some light source you can not make out illuminating the whole place. There appear to be a few support pillars joining the high ceiling to the bed of the lake.\n\nThe access shaft, located at the middle of the lake, lies to the southwest. The lake extends to your west and south." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y40z-20.c",
  "west" : DIR+"/rooms/sewer/x30y50z-20.c",
  "southwest" : DIR+"/rooms/sewer/x30y40z-20.c"
  ]) );
}
