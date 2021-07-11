inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "Moving among huge fern-like plants, you can see and hear air vents embedded in the walls sucking the oxygen produced here to somewhere else, most probably the City dome above. Bright solar panels above provide ultra-violet rays for the plants, but you hardly feel any heat at all despite the bright lighting.\n\nTo your southeast is an access shaft." );


  set_objects( 
 DIR+"/monsters/tangleweed.c", 
 DIR+"/monsters/tangleweed.c"
);
 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x-40y-90z-20.c"
  ]) );
}
