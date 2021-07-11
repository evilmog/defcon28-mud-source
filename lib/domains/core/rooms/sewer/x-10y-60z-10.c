inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "As you traverse the shallow and murky depths of this waterway canal, you keep detecting a faint trace of methane in the air. The smell doesn't seem to originate from the narrow walls or low ceiling, and you don't think that the sewerage or the small ceiling lights are giving off the gas. \n\nYou may leave either to the north or the south." );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y-50z-10.c",
  "south" : DIR+"/rooms/sewer/x-10y-70z-10.c"
  ]) );
}
