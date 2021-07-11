inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "You feel cold, shivering in the icy waters of the lake. It is dark here, with only minimal lighting coming from the high cavernous ceiling above. Support pillars run from the ceiling to the bed of the lake, although you can not figure out how the pillars can actually stand in the shifting sands of the lake's bottom. \n\nThe cold waters of the lake continue to your east and west. Wherever you go, you will still be cold as long as you're in the lake." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x50y20z-20.c",
  "west" : DIR+"/rooms/sewer/x30y20z-20.c"
  ]) );
}
