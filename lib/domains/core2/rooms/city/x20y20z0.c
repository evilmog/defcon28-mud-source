inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "%^GREEN%^Financial District - Hallway Intersection%^RESET%^" );
  set_long( "The north/south and east/west hallways of the Financial District converge here, producing a natural echo chamber.  Even the slightest whisper or scuff of your mining boots produces a sound that echoes through the nearby halls.\n\nThe heart of the Financial District -- the trading centers -- can be found to the northeast.  The hallways to the north and east lead to various offices for The Company's bean counters.\n\nThe City center is to the southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y30z0.c",
  "south" : DIR+"/rooms/city/x20y10z0.c",
  "east" : DIR+"/rooms/city/x30y20z0.c",
  "west" : DIR+"/rooms/city/x10y20z0.c",
  "northeast" : DIR+"/rooms/city/x30y30z0.c",
  "southwest" : DIR+"/rooms/city/x10y10z0.c",
  "up" : DIR+"/rooms/city/x20y20z10.c"
  ]) );
}
