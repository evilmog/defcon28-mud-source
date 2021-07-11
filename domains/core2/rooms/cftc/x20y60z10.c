inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 60);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Mars Financial: Lobby" );
  set_long( "The lobby of the Mars Financial Core branch.  The room seems almost empty, sporting only a reception desk and two white upholstered chairs surrounding a rectangular white table.  The northeast wall is actually dome wall, allowing you to see outside.\n\nA plaque next to the door on the west wall indicates that Branch Manager Diana's office is in that direction. The hallway is to the south." );

  add_item("table", "The white table sits between the two chairs.");
  add_item("chairs", "The chairs don't look very comfortable.  The white fabric covers each chair completely.");

  set_objects( 
 DIR+"/monsters/collette.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/cftc/x20y50z10.c",
  "west" : DIR+"/rooms/cftc/x10y60z10.c"
  ]) );
}
