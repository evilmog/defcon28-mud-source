inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 310);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Section:  North End" );
  set_long( "You are at a northern mass-transit of housing dome #1. If you go north, you will reach the north node that connects to the prison dome and the northern mine.  South leads back to the housing building of this dome." );

 set_exits( ([
  "north" : DIR+"/rooms/northmasstransit/x0y420z0.c",
  "south" : DIR+"/rooms/north/x0y210z0.c",
  "southeast" : DIR+"/rooms/north/x10y300z0.c"
  ]) );
}
