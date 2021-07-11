inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "You are in the southeast quadrant of the East housing dome. This is a corridor you are in with a large sign hanging over your head in with a large sign hanging over your head work involving the East housing dome.\n\nA mass-transit station is to your northwest. The corridor continues to your south and southeast." );

  add_action("flip", "flip");

 set_exits( ([
  "south" : DIR+"/rooms/east/x220y-20z0.c",
  "northwest" : DIR+"/rooms/east/x210y0z0.c",
  "southeast" : DIR+"/rooms/east/x230y-20z0.c"
  ]) );
}

int flip(string args) {
  if(!DARK_D->is_dark("/domains/core/rooms/east/x210y100z0.c")) {
     DARK_D->set_dark("/domains/core/rooms/east/x210y100z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x220y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x220y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x220y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x220y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x220y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x230y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x230y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x230y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x230y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x240y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x240y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x240y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x240y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x240y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x250y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x250y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x250y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x250y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x250y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x260y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x260y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x260y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x260y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x260y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x270y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x270y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x270y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x270y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x270y-60z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-30z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x280y-60z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x290y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x290y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x290y-40z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x290y-50z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x290y-60z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x300y-10z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x300y-20z0.c");
     DARK_D->set_dark("/domains/core/rooms/east/x300y-40z0.c");
  } else {
     DARK_D->remove_dark("/domains/core/rooms/east/x210y100z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x220y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x220y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x220y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x220y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x220y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x230y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x230y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x230y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x230y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x240y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x240y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x240y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x240y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x240y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x250y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x250y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x250y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x250y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x250y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x260y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x260y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x260y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x260y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x260y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x270y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x270y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x270y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x270y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x270y-60z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-30z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x280y-60z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x290y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x290y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x290y-40z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x290y-50z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x290y-60z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x300y-10z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x300y-20z0.c");
     DARK_D->remove_dark("/domains/core/rooms/east/x300y-40z0.c");
  }

  return 1;

}
