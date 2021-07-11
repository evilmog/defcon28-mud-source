inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 10);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Milkitrade: Trade Offices" );
  set_long( "The Milkitrade trade offices, home of many stockbrokers.  Eighteen office desks in 3 columns of 6 span the room.  The trade managers desk faces them all.  Fluorescent lights line the ceiling, sometimes flickering.  The carpet is a worn down off-white color, dirty from overuse. The lobby is to the west." );


  set_objects( 
 DIR+"/monsters/gana.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/cftc/x30y10z10.c"
  ]) );
}
