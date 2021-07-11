inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "This is the beginnings of a waterway canal. Here, the passageway is already cramped, but the sewage is still only ankle-deep. You know that progressing further down the canal will lead you to deeper waters. \n\nThe waterway canal deepens to the south. A service duct lies to the north." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x60y-80z-10.c"
  ]) );
}
