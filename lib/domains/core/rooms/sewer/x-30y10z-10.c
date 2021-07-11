inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The dark and murky sewer waters seem to hide something in this dark and narrow passageway. Dark and grimy slime cover the damp walls, while the dirty smells of something foul drifts around here, making breathing a grisly task for you.\n\nYou may continue in the waterway canal system to your south, east or west." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-30y0z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y10z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y10z-10.c"
  ]) );
}
