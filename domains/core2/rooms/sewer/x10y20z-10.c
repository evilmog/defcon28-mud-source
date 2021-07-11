inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( " The waterway canal takes an unexpected dip here, soaking you up to your waist. The ground beneath the surface of the stinking sewage is soft, as if you are walking on accumulated dirt. Here, the ceiling is just low enough for you to keep your ahead above the murky water." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y30z-10.c",
  "west" : DIR+"/rooms/sewer/x0y20z-10.c"
  ]) );
}
