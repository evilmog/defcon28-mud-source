inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "Plain steel walls and a certain metallic chill is all that this cold and remote room has to offer. You wonder how the Company personnel which use this access shaft use each time they enter it, seeing that the room terribly lacks a certain warmth. \n\nTo the west is a sewer passage. Iron rungs lead down." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x90y0z-10.c",
  "down" : DIR+"/rooms/sewer/x100y0z-20.c"
  ]) );
}
