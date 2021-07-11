inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Cold sewer waters cover your legs up to your knees as you trudge along the waterway canal. The narrow walls and low ceiling cause you to be a little paranoid about your safety, but you know that if the water level doesn't rise too fast, you might still be able to get out. \n\nThis claustrophobic canal continues to your east and west." );


  set_objects( 
 DIR+"/monsters/greensnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y-20z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y-20z-10.c"
  ]) );
}
