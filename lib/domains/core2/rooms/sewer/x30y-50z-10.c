inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "This is a narrow tunnel you are in. Sewage water covers your feet, and the mold-covered walls and ceilings are so enclosing that you feel suffocated. You try not to get any of the mold on you as long as you are in this tunnel.\n\nTo the north you see a main access tunnel, while an access shaft is located to your south. " );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y-40z-10.c",
  "south" : DIR+"/rooms/sewer/x30y-60z-10.c"
  ]) );
}
