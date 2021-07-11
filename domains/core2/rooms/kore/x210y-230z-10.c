inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", -230);
  set_property("z", -10);

  add_area( "kore" );
  set_short( "Atrium Alcove" );
  set_long( "Somehow a small portion of the larger atrium to the east was split off, resulting in this cozy alcove. There is a large tangle of growth to the east which makes passage to the main atrium impossible. \n\n     There is an odd pile of rocks here, shaped like a large chair or throne, that may be covering a hole of some sort.  You might be able to squeeze through." );

 set_exits( ([
  "north" : DIR+"/rooms/kore/x210y-220z-10.c"
  ]) );
}
