inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "The moss-encrusted walls of this large pipe offer you a little grip on its circular surface, but that is the only advantage you have here. Otherwise, the dirty water trickling away at the bottom of the pipe is making you rather uncomfortable. \n\nThe large pipe extends to the north and the south." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y-50z-10.c",
  "south" : DIR+"/rooms/sewer/x20y-70z-10.c"
  ]) );
}
