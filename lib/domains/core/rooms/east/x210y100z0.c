inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", 100);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Housing Dome: North Mass-Transit" );
  set_long( "You are at the northern end of the Eastern Housing Dome. A transit tube leaves from here heading north to the Detention Center dome from here." );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x210y170z0.c",
  "south" : DIR+"/rooms/east/x210y0z0.c"
  ]) );
}
