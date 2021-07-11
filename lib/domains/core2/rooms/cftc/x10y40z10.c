inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 40);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Galactic Securities: Lobby" );
  set_long( "The lobby of Galactic Securities' Core branch.  A wood reception desk spans the west wall.  Four comfortable looking black leather chairs with short wooden legs sit around a low wooden table.  The floor is tiled.\n\nSeveral incandescent bulbs are recessed in the ceiling lighting the room well.  Several tall, wooden bookcases line the south wall.  Benches sit in front of them to allow reading.\n\nA door on the north wall has the words Vice President Tweeter' on its glass pane.  The hallway is to the east." );

  add_item("bookcases", "The bookcases line the southern wall.  They hold all kinds of books ranging from classics to modern fiction to trade manuals.");
  add_item("benches", "The benches are in front of the bookcases.  Sometimes people sit on them to enjoy a book.  Maybe Galactic thought it was a library, not financial firm.");

  set_objects( 
 DIR+"/monsters/sarah.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/cftc/x10y50z10.c",
  "east" : DIR+"/rooms/cftc/x20y40z10.c"
  ]) );
}
