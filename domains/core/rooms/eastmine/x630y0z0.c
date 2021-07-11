inherit "/std/room";
inherit "/std/evil/mine";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 630);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "eastmine" );
  set_short( "East Mine Ruins" );
  set_long( "This is the center of the East Mine, what used to be a mining shaft is now plugged with a giant fusion reactor. The fusion reactor powers the cryptocurrency mining gear. Rows of terminals line the walls.\n\nYou should try to '%^EXT_129%^crypto%^EXT_75%^' here." );
  add_action("do_crypto", "crypto");


 set_exits( ([
  "north" : DIR+"/rooms/eastmine/x630y40z0.c",
  "south" : DIR+"/rooms/eastmine/x630y-40z0.c",
  "east" : DIR+"/rooms/eastmine/x670y0z0.c",
  "west" : DIR+"/rooms/eastmine/x590y0z0.c"
  ]) );
}
