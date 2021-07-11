inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 400);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Bingo Hall" );
  set_long( "Long rows of tables and chairs stand in a huge room. Up front used to be a small stage but its long since been destroyed. You see some organs from an unknown creature splattered all over the floor." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x400y-670z0.c",
  "west" : DIR+"/rooms/nympho/x390y-680z0.c",
  "northeast" : DIR+"/rooms/nympho/x410y-670z0.c"
  ]) );
}
