inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The waterway canal here seem to only have water up to your ankles, but you are sure that it will deepen further to your north and west. It is relatively bright in here, what with the illumination coming from what seems to be a monitoring station to your southeast. \n\nThe waterway canal continues to your north and west. The waste monitor station is located to your southeast." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y20z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x0y0z-10.c"
  ]) );
}
