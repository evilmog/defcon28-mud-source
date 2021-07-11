inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You stumble around a narrow sewerway. The ceiling is low, and the only source of light seems to be coming from the small little lights on the ceiling. The acrid smell of the sewers is strong, but you seem to detect a faint hint of methane in the air too. \n\nYou can go north into a mass access tunnel, or east deeper into the waterway canal." );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y-40z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-50z-10.c"
  ]) );
}
