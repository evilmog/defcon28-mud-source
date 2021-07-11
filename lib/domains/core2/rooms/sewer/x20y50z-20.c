inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 50);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "You are in a large underground lake, with the water up to your chest. It is not really dark in here, with illumination coming from some unknown light source far high up in the ceiling. A few pillars are connected from the foot of the lake to the ceiling.\n\nThe access shaft, which seems to be in the exact middle of the lake, lies to your southeast. You can continue to the south and east in the lake." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x20y40z-20.c",
  "east" : DIR+"/rooms/sewer/x30y50z-20.c",
  "southeast" : DIR+"/rooms/sewer/x30y40z-20.c"
  ]) );
}
