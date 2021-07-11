inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor" );
  set_long( "Blue stripes of soft light further illuminate the corridor you are in, giving it a soft watery feeling. You can barely feel the soft vibrations of water rushing behind the walls around you. \n\nThe corridor continues to the east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x60y70z-10.c",
  "west" : DIR+"/rooms/sewer/x40y70z-10.c"
  ]) );
}
