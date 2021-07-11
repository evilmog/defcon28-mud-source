inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -280);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "The hallway opens up wider here. There are noticeable footprints scattered about the slime on the floor.  There appears to be more rice crumbs everywhere.  There is a strange glow on the floor of the cave here. It appears to be covered with toxic sludge. You notice a large mark on the wall.  Perhaps if you take a closer look at the mark, you might be able to see what made it. " );

  add_item("mark", "There is a large claw mark on the wall.  It looks completely unnatural.");

  set_objects( 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/greenslime.c", 
 DIR+"/monsters/weevil.c", 
 DIR+"/monsters/deformedweevil.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/weevil/x240y-270z-10.c",
  "south" : DIR+"/rooms/weevil/x240y-290z-10.c"
  ]) );
}
