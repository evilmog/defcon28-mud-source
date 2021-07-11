inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "This is yet another sewer passage in a long line of sewer passages. Its father was a sewer passage, its mother was a sewer passage and it even spawned little baby sewer passages. Or basically evilmog forgot about this room and decided to put it back in because it was blocking access to something." );

 set_exits( ([
  "up" : DIR+"/rooms/sewer/x50y-10z-20.c",
  "down" : "/domains/labyrinth/rooms/10_10_0.c"
  ]) );
}
