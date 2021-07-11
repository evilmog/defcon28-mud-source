inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 440);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Yeah I'm out of material, just imagine a nightclub, imagine your favorite music, now imagine the exact opposite of that. This place makes your skin crawl. You know that clown is out to get you.  Oh and the music is bad, like terrible re·pet·i·tive nightclub music." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x450y-640z0.c",
  "southeast" : DIR+"/rooms/nympho/x450y-650z0.c"
  ]) );
}
