inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are walking along a service duct, a relatively dry passage if compared to the other sewer passageways. Lights on the ceiling illuminate your way as you walk along here. The walls are grey in color, otherwise they're pretty featureless. \n\nThe service duct continues to your north and east." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y-70z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-80z-10.c"
  ]) );
}
