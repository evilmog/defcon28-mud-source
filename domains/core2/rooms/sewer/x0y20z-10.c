inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "As you progress through this dark and claustrophobic canal, you notice all kinds of trash floating pass your knees. Even in the almost non-existent light, you can see scraps of paper, depleted powercells, old clothes and even the small skeleton of some small animal. \n\nYou may continue to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x10y20z-10.c",
  "west" : DIR+"/rooms/sewer/x-10y20z-10.c"
  ]) );
}
