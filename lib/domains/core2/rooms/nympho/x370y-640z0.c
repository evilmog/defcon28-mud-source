inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 370);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Killer Bunny Races" );
  set_long( "A huge oval pit rests in the middle of the room, out lined by small, chalk written tracks. A human heart, mounted from a small rail on the side of the track, overhangs the small runways.  The destroyed rabbit cages are kept against the far southern wall, each used to contain a prized bunny but it looks like zombies have taken over." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x370y-650z0.c",
  "west" : DIR+"/rooms/nympho/x360y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x360y-650z0.c"
  ]) );
}
