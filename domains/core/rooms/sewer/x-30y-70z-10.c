inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You find yourself in a pleasantly cool service duct. A hidden air ventilator is blowing from the south, so you actually don't smell the sewers here. The walls here are a dull grey, and lights on the ceiling provide adequate lighting to get around. \n\nTo your north is a mass access tunnel. The service duct continues to your south." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x-30y-80z-10.c"
  ]) );
}
