inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -270);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "The stench of slime fills the room. The hallway here is narrower than the entrance of this small cave, but appears to open up further to the east. The walls are coated with slime and pock marks.  Stalactites cover the ceiling like sharp spikes ready to fall on you.  The ground is completely uneven in this area, causing the pools of slime to form at odd angles and crevices. " );


  set_objects( 
 DIR+"/monsters/smallweevil.c", 
 DIR+"/monsters/smallweevil.c", 
 DIR+"/monsters/smallweevil.c", 
 DIR+"/monsters/weevil.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/weevil/x230y-270z-10.c",
  "west" : DIR+"/rooms/weevil/x210y-270z-10.c"
  ]) );
}
