inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 390);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Busted Chapel" );
  set_long( "What was once a place for dreams is now only a faint memory. The rows of pews are in disarray and nothing else remains of this once great church." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x390y-660z0.c"
  ]) );
}
