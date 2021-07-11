inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 40);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "CFTC: North Hallway" );
  set_long( "The north hallway houses the Core branches of Galactic Securities and Mars Financial.  The carpet here is fluffy and navy blue.  Paintings adorn the walls every few feet.\n\nThe entrance to Galactic Securities is on the west wall.  The hallway continues north towards Mars Financial and south to the lobby." );

}
