inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Near-darkness, an amazingly horrible smell and the very diversified assortment of trash in the waters you are waist-deep in make this a very educational experience for you. As you wade through the sludge, you try not to injure yourself too much on the discarded wastes in the sewage waters. \n\nA waterway canal system lies to your east. To your north and south the main access tunnel continues. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y30z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y10z-10.c",
  "east" : DIR+"/rooms/sewer/x-50y20z-10.c"
  ]) );
}
