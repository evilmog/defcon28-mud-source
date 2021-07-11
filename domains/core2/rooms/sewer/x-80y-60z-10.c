inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You stand waist-deep in a waterway canal. A large semi-transparent chute originating from the east disappears into the depts of the canal here. You notice that the water is actually clean and clear, and you actually see the chute connected to a small hole in the ground.\n\nA large pipe juts out from the northern wall." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/snake.c", 
 DIR+"/monsters/greensnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-70y-60z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-80y-50z-10.c"
  ]) );
}
