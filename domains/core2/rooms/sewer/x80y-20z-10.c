inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "The air in this passage is a little musty and cold, but at least the stench of the sewers is not so strong here. Glowing sediment on the slime-covered walls and floor provide adequate lighting. \n\nThe sewer passage continues to the northeast, northwest and southeast. " );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x90y-10z-10.c",
  "northwest" : DIR+"/rooms/sewer/x70y-10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x90y-30z-10.c"
  ]) );
}
