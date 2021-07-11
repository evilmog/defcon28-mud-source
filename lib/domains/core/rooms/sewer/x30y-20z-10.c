inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "This seems to be a dead end. The waterway canal here is flooded, with the water levels rising up to your chest. Not a very good place to be in at all, especially since the sewers might flood at any time. \n\nIron rungs lead up to the City dome. Otherwise you may go north." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y-10z-10.c",
  "up" : DIR+"/rooms/city/x30y-20z0.c"
  ]) );
}
