inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Club Entrance" );
  set_long( "This looks like a typical club entrance. Security guards are checking waiting potential patrons. It appears as if a long line is forming, apparently nobody is on the list." );


  set_objects( 
 DIR+"/monsters/clubbouncer.c", 
 DIR+"/monsters/clubbouncer.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/nympho/x430y-650z0.c",
  "northwest" : DIR+"/rooms/nympho/x420y-630z0.c"
  ]) );
}
