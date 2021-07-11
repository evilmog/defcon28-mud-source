inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 470);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The music is loud and the partiers seem to be partying hard. The music is loud and likely some sort of Top 40 trash, you can't quite tell who's playing but it sounds cookie cutter, like Nickleback but even worse." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/zombie.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x480y-640z0.c",
  "west" : DIR+"/rooms/nympho/x460y-640z0.c"
  ]) );
}
