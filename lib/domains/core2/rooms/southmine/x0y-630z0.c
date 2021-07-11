inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -630);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Central Transit Station" );
  set_long( "This is the center of the prestigous South Mine.  One of the richest mines in existence in any of The Company's mining colonies, this mine specializes in the highly sought-after material mithril.  Any miner who frequents this mine will soon become fast friends with many a shopowner!" );

 set_exits( ([
  "north" : DIR+"/rooms/southmine/x0y-590z0.c",
  "south" : DIR+"/rooms/southmine/x0y-670z0.c",
  "east" : DIR+"/rooms/southmine/x40y-630z0.c",
  "west" : DIR+"/rooms/southmine/x-40y-630z0.c"
  ]) );
}
