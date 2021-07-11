inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The knee-deep sewer waters which engulf your legs are murky and dark, while the narrow confines of this canal force you to make your body as small as possible. An occasional draft chills you to the bone, but you can't seem to pinpoint the origin of the draft.\n\n   Exits are to the north, east and west." );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y0z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y-10z-10.c"
  ]) );
}
