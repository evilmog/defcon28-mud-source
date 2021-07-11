inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You stand at a turning in the waterway canal. The waters here are much deeper, right up to your waist. However, the walls are bigger, giving you more room to move around although the ceiling is still as low as ever.\n\nThe waterway canal extends to your south and east." );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x20y0z-10.c",
  "east" : DIR+"/rooms/sewer/x30y10z-10.c"
  ]) );
}
