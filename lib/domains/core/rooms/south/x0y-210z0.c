inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -210);
  set_property("z", 0);

  add_area( "south" );
  set_short( "Central Area" );
  set_long( "There are few residents of this area who are enjoying the peace and serenity from the hustle and bustle of the city and mining domes.  This dome within a dome contains the housing for middle-class miners." );

 set_exits( ([
  "north" : DIR+"/rooms/south/x0y-110z0.c",
  "south" : DIR+"/rooms/south/x0y-310z0.c",
  "east" : DIR+"/rooms/south/x100y-210z0.c"
  ]) );
}
