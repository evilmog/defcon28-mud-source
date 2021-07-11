inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 400);
  set_property("y", -690);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "%^RED%^The Roxbury%^RESET%^" );
  set_long( "%^BLUE%^This is the outside of the newest and best night club ever to hit Core -- The Roxbury.  The outside has a few cage and pole dancers, bars, and lots of music.  In fact, it looks just like the inside should! Maybe you're on the list and you can go in to party.%^RESET%^" );


  set_objects( 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/groupie.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c", 
 DIR+"/monsters/loser.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x410y-690z0.c",
  "northwest" : DIR+"/rooms/nympho/x390y-680z0.c"
  ]) );
}
