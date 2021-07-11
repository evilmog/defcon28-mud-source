inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "The soft rustling of the large leaves all around you are giving you the creeps, especially since you're walking in near darkness under a thick leafy canopy. The only other sound besides the vents sucking the air from the atrium and the crunching of the dark earth beneath you is your fast, heavy breathing here. \n\nDarkness in the atrium lies to the southeast and southwest." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x60y-70z-20.c",
  "southwest" : DIR+"/rooms/sewer/x40y-70z-20.c"
  ]) );
}
