inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "A faint orangish tinge lights up this passage, the glow coming from some weird sediment all over the place. The musty air is is hard on the lungs but not exactly unbearable. You see slime all over the walls and floor. \n\nSewer passages are located north and east." );


  set_objects( 
 DIR+"/monsters/constrictor.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y0z-10.c",
  "east" : DIR+"/rooms/sewer/x90y-10z-10.c"
  ]) );
}
