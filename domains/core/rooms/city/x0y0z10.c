inherit "/std/evil/cheat";

#include "../../domain.h" 

static string do_fmenu(void);

void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 0);
  set_property("z", 10);

  add_area( "city" );
  set_short( "Operations" );
  set_long( "This room is full of operations consoles, this is where the entire colony is managed from. There is a console on the wall...." );

  add_item("console", "#do_fmenu");

 set_exits( ([
  "down" : DIR+"/rooms/city/x0y0z0.c"
  ]) );
}

int do_cheat(string arg) {
  return do_activate(arg);
}
