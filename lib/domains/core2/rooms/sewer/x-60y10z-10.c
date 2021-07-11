inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You can hardly make out anything in this gigantic tunnel you are in, what with the lack of visibility and all. However, you do tend to recognize some of the discarded stuff in the sewage with you, not to mention a few of the many abominable smells floating around. You feel that this main access tunnel wasn't designed to accomodate any lifeform at all. \n\nOther parts of the main access tunnel are located to your north and southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y20z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-70y0z-10.c"
  ]) );
}
