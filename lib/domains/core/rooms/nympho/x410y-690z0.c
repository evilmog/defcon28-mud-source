inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 410);
  set_property("y", -690);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "%^RED%^The Roxbury%^RESET%^" );
  set_long( "%^BLUE%^This is the very front of the line for The Roxbury. Two bouncers stand ready to kick anyone out, and THE list is held in one of the bouncers hands. Hopefully your name is on it.%^RESET%^" );


  set_objects( 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/bouncer.c", 
 DIR+"/monsters/bouncer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x410y-680z0.c",
  "west" : DIR+"/rooms/nympho/x400y-690z0.c"
  ]) );
}
