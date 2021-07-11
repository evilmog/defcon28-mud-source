inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -290);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "This passage opens up to a wide steel door that is stuck almost closed. There is a huge empty clearing, where some sort of storage containers may have sat.  You notice parts of rods cluttering the floor.  The slime and sludge is relatively thick in large puddles. " );


  set_objects( 
 DIR+"/monsters/culprit.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/weevil/x240y-290z-10.c",
  "west" : DIR+"/rooms/weevil/x220y-290z-10.c"
  ]) );
}
