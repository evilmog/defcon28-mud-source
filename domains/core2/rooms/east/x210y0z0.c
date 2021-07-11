inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Housing Dome: Center" );
  set_long( "The conveyor belt has brought you to the central area. Habitants are moving boxes of equipment into the housing building in front of you.  There are benches for people to sit on while they can watch the children frolic in the nearby playground.  There seem to be some important looking edifices to the southeast.\n\n You can visit the Atrium by going to the southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/east/x210y100z0.c",
  "south" : DIR+"/rooms/east/x210y-100z0.c",
  "east" : DIR+"/rooms/east/x310y0z0.c",
  "west" : DIR+"/rooms/east/x110y0z0.c",
  "southeast" : DIR+"/rooms/east/x220y-10z0.c",
  "southwest" : DIR+"/rooms/east/x200y-10z0.c",
  "up" : DIR+"/rooms/east/x210y0z10.c"
  ]) );
}
