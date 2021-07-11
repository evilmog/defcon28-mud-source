inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 50);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "It is rather quiet in here, with the lakes waters as still as ever. You make your way across with quite a lot of noise, sloshing away at the chest-high waters. You actually get to see ripples moving away from your body.\n\nYou may proceed to the east and west from here." );


  set_objects( 
 DIR+"/monsters/blob.c", 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y50z-20.c",
  "west" : DIR+"/rooms/sewer/x20y50z-20.c"
  ]) );
}
