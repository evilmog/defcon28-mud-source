inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 50);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "CFTC: End of North Hallway" );
  set_long( "The north hallway houses the Core branches of Galactic Securities and Mars Financial.  The carpet here is fluffy and navy blue. Paintings adorn the walls every few feet.\n\nThe entrance to Mars Financial is on the north wall and the CFTC administration offices entrance is on the east wall. The hallway extends south towards Galactic Securities and the lobby." );

 set_exits( ([
  "north" : DIR+"/rooms/cftc/x20y60z10.c",
  "south" : DIR+"/rooms/cftc/x20y40z10.c",
  "east" : DIR+"/rooms/cftc/x30y50z10.c"
  ]) );
}
