inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Overtly-bright lights illuminate this steel corridor. The reflections blind your eyes to a certain extent, while the lack of air-conditioning makes you feel a little feverish. This corridor can not be too healthy to stand around in.\n\nYou can continue to the south, east or west along these corridors." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x60y230z0.c",
  "east" : DIR+"/rooms/north/x70y240z0.c",
  "west" : DIR+"/rooms/north/x50y240z0.c"
  ]) );
}
