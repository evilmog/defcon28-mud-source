inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Here, the water in the canal is only up to your ankles. It is also brighter around here, the illumination coming from the room to your northwest. The ceiling is higher than the other canals, while the corridor is also much broader. \n\nThe waterway canal continues to the east. A control room of some sort lies to the northwest." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x20y-10z-10.c",
  "northwest" : DIR+"/rooms/sewer/x0y0z-10.c"
  ]) );
}
