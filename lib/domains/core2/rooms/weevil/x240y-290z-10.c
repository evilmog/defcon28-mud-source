inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -290);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "The tunnel curves west and north here.  Slime and toxic sludge mix to form a very bright glowing green waste.  You notice a laser drill on the ground.. well, what's left of it.  The parts left don't look useful, but they still spark slightly.  Some stalactites have formed on the ceiling. " );

  add_item("ground", "You search the ground, and only find scraps and tidbits of what use to be a laser drill. ");

  set_objects( 
 DIR+"/monsters/deeformedweebil.c", 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/deformedweevil.c", 
 DIR+"/monsters/weevil.c", 
 DIR+"/monsters/greenslime.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/weevil/x240y-280z-10.c",
  "west" : DIR+"/rooms/weevil/x230y-290z-10.c"
  ]) );
}
