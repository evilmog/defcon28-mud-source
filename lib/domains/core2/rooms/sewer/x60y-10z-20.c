inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -10);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "Your feet crunch on the dark earth as you slowly move around the atrium. The thick foliage prove to make almost everything invisible to you, even with the bright solar panels providing artificial sunlight for you above. Huge leaves constantly fall into your face, and you can only be grateful that it's rather cool in the atrium, not some tropical heat or something else as hot and humid.\n\nExits are to the southeast and southwest." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x70y-20z-20.c",
  "southwest" : DIR+"/rooms/sewer/x50y-20z-20.c"
  ]) );
}
