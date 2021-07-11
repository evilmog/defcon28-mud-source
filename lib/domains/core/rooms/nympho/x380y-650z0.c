inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 380);
  set_property("y", -650);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Court House" );
  set_long( "A small, cramped office filled with stacks of papers and file cabinets awaits you.  The imitation oak desk has so many coffee stains on it it looks like it was actually made that way in the first place. An extremely depressing room to be in, all you want to do is get out." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x380y-660z0.c"
  ]) );
}
