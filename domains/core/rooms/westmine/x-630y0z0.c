inherit "/std/room";
inherit "/std/evil/mine";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -630);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "westmine" );
  set_short( "West Mine - Central Transit Station" );
  set_long( "So years ago the company sold off all its mines, it replaced them with digital currency mines. All the corezite that was here was mined out years ago to make the fusion reactors that make up this digital mine. Chairs are all over the place lined up against terminals.\n\nYou should try to '%^EXT_129%^crypto%^EXT_75%^' here." );

  add_action("do_crypto", "crypto");

 set_exits( ([
  "north" : DIR+"/rooms/westmine/x-630y40z0.c",
  "south" : DIR+"/rooms/westmine/x-630y-40z0.c",
  "east" : DIR+"/rooms/westmine/x-590y0z0.c",
  "west" : DIR+"/rooms/westmine/x-670y0z0.c"
  ]) );
}

