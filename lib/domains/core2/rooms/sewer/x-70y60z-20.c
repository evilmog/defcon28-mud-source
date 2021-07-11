inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Holding Pen" );
  set_long( "Slime. Slime is all over this holding pen, dripping from the ceiling to the floor, dripping all over you. You can hardly keep your balance here, with the slime spread so generously all over the place.\n\nAn access shaft is located to your west." );


  set_objects( 
 DIR+"/monsters/slime.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-80y60z-20.c"
  ]) );
}
