inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Reception Hall" );
  set_long( "The East Dome reception hall looks pretty drab to you, due to its lack of decor. Yet, the carpetted floor enables you to feel a certain sense of class, and the reception table while being plain manages to stand out as a firm-looking piece of metal furniture.\n\nCorridors are accessible to your north, east and west." );


  set_objects( 
 DIR+"/monsters/tiffany.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x240y-10z0.c",
  "east" : DIR+"/rooms/east/x250y-20z0.c",
  "west" : DIR+"/rooms/east/x230y-20z0.c"
  ]) );
}
