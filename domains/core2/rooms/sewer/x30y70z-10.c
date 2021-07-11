inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor : T-Junction" );
  set_long( "This is a T-junction in the hydro generator complex. Clean and cool air is circulated in here from hidden air conditioners, a relief indeed from the horrible smell of the sewers outside. The walls are white except for blue stripes in the middle of them, illuminating the already bright room further with soft blue light. \n\nTo the north is the hydro generator entrance. Corridors lead to the east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y80z-10.c",
  "east" : DIR+"/rooms/sewer/x40y70z-10.c",
  "west" : DIR+"/rooms/sewer/x20y70z-10.c"
  ]) );
}
