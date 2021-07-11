inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "As you make your way across the waterway canal, you fight back the rush of claustrophobia which tend to engulf you every now and then in this narrow canal. The darkness adds to your irrational fear. And you can feel your legs getting soft from overexposure to the cold waters. \n\nThe waterway canal branches out to the north, south and east." );


  set_objects( 
 DIR+"/monsters/greensnake.c", 
 DIR+"/monsters/greensnake.c", 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y-10z-10.c",
  "south" : DIR+"/rooms/sewer/x-50y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y-20z-10.c"
  ]) );
}
