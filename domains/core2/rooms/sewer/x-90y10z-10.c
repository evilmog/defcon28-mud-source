inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "The water tunnel is narrow and humid, with sewage floating around your feet. The walls are encrusted with mold, most probably a side effect of the confined space of the tunnel and the sewage here. \n\nExits are to the north and east." );


  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y20z-10.c",
  "east" : DIR+"/rooms/sewer/x-80y10z-10.c"
  ]) );
}
