inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Rats Lair" );
  set_long( "You appear to have stumbled into a kind of lair. Judging from the number of rats running around, you deduce that this place belongs to the rats. Looking around, you realize that this doesn't seem to be a standard City sewer room. The walls here are made of old red brick, and a large pool of water in the middle reminds you of a jacuzzi. A nest of eggs are in a corner of the lair. \n\nThe end of a pipe juts out here. It appears to be the only exit available." );


  set_objects( 
 DIR+"/objects/secard.c", 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/warrior.c", 
 DIR+"/monsters/leader.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y-60z-10.c"
  ]) );
}
