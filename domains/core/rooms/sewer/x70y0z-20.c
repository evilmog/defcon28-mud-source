inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 0);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Sewer Tunnel" );
  set_long( "Water is leaking from every pipe in the complex network above you. Water is also pouring out steadily from every crack in the tunnel you are in. The water level which is currently up to your thigh could be rising and you wouldn't realize it till it's up to your head.\n\nYou can continue along the sewer tunnel by either heading east or west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x80y0z-20.c",
  "west" : DIR+"/rooms/sewer/x60y0z-20.c"
  ]) );
}
