inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You find yourself in a large and smelly pipe. The surfaces of the pipe are covered with moss, and that little stream of drain water flowing at the bottom part of the pipe is enhancing the original aroma of the sewers further.\n\nThe pipe continues to the north and east. What looks like a lair is located to your northeast." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x70y-30z-10.c",
  "northeast" : DIR+"/rooms/sewer/x70y-20z-10.c"
  ]) );
}
