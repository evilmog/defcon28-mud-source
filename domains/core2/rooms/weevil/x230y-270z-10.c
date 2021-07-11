inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -270);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "Slime saturates the walls and the floor heavily here. There appears to be several worm markings from weevils. The hallway closes together a little, making it hard to traverse through.  You can go back to the west, or trudge on further east. " );


  set_objects( 
 DIR+"/monsters/angryweevil.c", 
 DIR+"/monsters/angryweevil.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/weevil/x240y-270z-10.c",
  "west" : DIR+"/rooms/weevil/x220y-270z-10.c"
  ]) );
}
