inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This is a rather shallow main access tunnel, with the sewage only reaching up to your knees. The waste floating around has only been cut down to the occasional piece of unwanted trash drifting by you. Surprisingly, even the stench is not that suffocating anymore. \n\nA small pathway leads to what looks like a monitoring station to your southwest. The main access tunnel continues to your northeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x20y20z-10.c",
  "southwest" : DIR+"/rooms/sewer/x0y0z-10.c"
  ]) );
}
