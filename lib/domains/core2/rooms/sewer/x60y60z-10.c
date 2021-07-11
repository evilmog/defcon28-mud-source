inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "What minimal lighting present here is hardly enough for you to see what's around you. The tons of garbage and assorted trash floating waist-high in the sewer waters is enough to hide any dangers in the water, but you try not to think of that too much as you slowly wade on.\n\nYou may go either northeast or southwest to the other parts of this main access tunnel." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x70y70z-10.c",
  "southwest" : DIR+"/rooms/sewer/x50y50z-10.c"
  ]) );
}
