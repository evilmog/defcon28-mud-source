inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -260);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Abandoned Storage Room" );
  set_long( "This is an empty storage room, that would house tons of items.  It would appear that only small mutated cockroaches are here now.  There are chains laying all over the ground.  You gaze up reluctantly to the ceiling and notice that there is barely any light in this room, air is blowing from some kind of hole, but it's rather small. " );


  set_objects( 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c", 
 DIR+"/monsters/mutatedcockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/weevil/x240y-270z-10.c"
  ]) );
}
