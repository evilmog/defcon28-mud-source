inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Narrow, dark and smelly, this waterway canal reflects everything you expected a sewer to be, right down to the narrow walls, low ceilings and knee-deep waters. The waters seem to be shifting rather slowly, and you wonder if there's something under it you don't know.\n\nYou can leave to the other parts of the waterway canal by going south or west." );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-20y-20z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-10z-10.c"
  ]) );
}
