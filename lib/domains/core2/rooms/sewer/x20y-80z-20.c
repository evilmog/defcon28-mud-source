inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "A dark-colored earth crunches beneath you as you traverse this atrium in the bright artificial sunlight. You breath only fresh air here, the result of so many oxygen-producing plants in your immediate vicinity. Surprisingly, the solar panels above you are not radiating much heat, yet the fern-like plants around you are growing very well. \n\nSmall paths to the other parts of the atrium lead west, northeast and northwest." );


  set_objects( 
 DIR+"/monsters/tangleweed.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x10y-80z-20.c",
  "northeast" : DIR+"/rooms/sewer/x30y-70z-20.c",
  "northwest" : DIR+"/rooms/sewer/x10y-70z-20.c"
  ]) );
}
