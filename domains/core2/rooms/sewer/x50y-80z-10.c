inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You are at the end of the main access tunnel here. The sewage seems to have accumulated here, so the stench is pretty bad. Also, the waters here seem to be much deeper as now you are up to your chest in junk, sediment, trash and some other stuff which you refuse to identify. \n\nThe main access tunnel leads to the north. To your southwest is a waterway canal." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-70z-10.c",
  "southwest" : DIR+"/rooms/sewer/x40y-90z-10.c"
  ]) );
}
