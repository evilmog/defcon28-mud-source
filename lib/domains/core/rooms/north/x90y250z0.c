inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Plumbing Liaison Office" );
  set_long( "This is the North Domes plumbing liaison office, the place where residents of this dome report their plumbing woes. It is a rather dull place, with very few furniture. An empty desk sits in the middle of the room, while a closet is located at the eastern end of the office.\n\nYou can leave by going west." );


  set_objects( 
 DIR+"/monsters/torga.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/north/x80y250z0.c"
  ]) );
}
