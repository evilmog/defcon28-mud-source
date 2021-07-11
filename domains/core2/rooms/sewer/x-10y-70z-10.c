inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You are at the beginning of a waterway canal, one of the City's buffer sewer irrigation system which prevents the sewers from flooding out into the City. The walls are narrow and claustrophobic while the ceiling is low. There appears to be a very faint smell of methane in the air. \n\nTo the south is a mass access tunnel. The waterway canal continues to your north. " );


  set_objects( 
 DIR+"/monsters/snake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x-10y-80z-10.c"
  ]) );
}
