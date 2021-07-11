inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You appear to be at a section of the large pipe where it is joined to another. Here, the moss seems to have accumulated a lot, making your grip better but your hands slimier.\n\nThe large pipe goes to the north and the east." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y-60z-10.c",
  "east" : DIR+"/rooms/sewer/x30y-70z-10.c"
  ]) );
}
