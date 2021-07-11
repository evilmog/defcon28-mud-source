inherit "/std/room";
inherit "/std/evil/mine";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -630);
  set_property("z", 0);

  add_area( "southmine" );
  set_short( "South Mine - Central Transit Station" );
  set_long("This mine has long since been mined out, all that remains of the original mine is the giant fusion reactor in its pit. Terminals used for crypto currency mining are all over the place. Mog Coin is worth the most in the galaxy.\n\nYou should try to '%^EXT_129%^crypto%^EXT_75%^' here.");

  add_action("do_crypto", "crypto");
 set_exits( ([
  "north" : DIR+"/rooms/southmine/x0y-590z0.c",
  "south" : DIR+"/rooms/southmine/x0y-670z0.c",
  "east" : DIR+"/rooms/southmine/x40y-630z0.c",
  "west" : DIR+"/rooms/southmine/x-40y-630z0.c"
  ]) );
}

