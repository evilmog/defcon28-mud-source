inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 0);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Sewer Tunnel" );
  set_long( "You stand in a dark and narrow tunnel, sewage up to your thighs. A complex network of small pipes run on the ceiling above you. Water seems to be dripping all around you. \n\nTo your east is an access shaft. The sewer tunnel continues to your west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x100y0z-20.c",
  "west" : DIR+"/rooms/sewer/x80y0z-20.c"
  ]) );
}
