inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 30);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "CFTC: North Hallway" );
  set_long( "The north hallway houses the Core branches of Galactic Securities and Mars Financial.  The carpet here is fluffy and navy blue.  Paintings adorn the walls every few feet.\n\nThe hallway continues to the north on the way to Galactic Securities and Mars Financial.  The lobby is south from here." );

 set_exits( ([
  "north" : DIR+"/rooms/cftc/x20y40z10.c",
  "south" : DIR+"/rooms/cftc/x20y20z10.c"
  ]) );
}
