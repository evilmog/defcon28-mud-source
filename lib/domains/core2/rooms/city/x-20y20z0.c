inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Generator Corridor" );
  set_long( "This corridor runs in a loop around the large nuclear fusion generator which powers the City Dome and the nearby housing domes. The tube used to contain the fusion reactions runs in a circle just inside this corridor. A viewport along the inner wall, slanted downwards, overlooks the huge generator.\n\nThe circular corridor leads to the northeast and southwest, while a hall to your southeast leads back to the center of the City Dome." );


  set_objects( 
 DIR+"/monsters/droid.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/city/x-10y30z0.c",
  "southeast" : DIR+"/rooms/city/x-10y10z0.c",
  "southwest" : DIR+"/rooms/city/x-30y10z0.c"
  ]) );
}
