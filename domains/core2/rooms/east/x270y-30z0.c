inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 270);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "In/Out Office" );
  set_long( "This is a strangely silent place, noiseless save for the quiet clicks coming from the computers in here. You are standing in the dome's In/Out office, where documents are are sent and received to and from the respective offices and areas. This is a wholly automated process, controlled by the main processing computer sitting in a corner. \n\nClerical areas can be accessed to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x280y-30z0.c",
  "west" : DIR+"/rooms/east/x260y-30z0.c"
  ]) );
}
