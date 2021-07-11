inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -270);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Hidden Passage" );
  set_long( "The slime on the wall continues to thicken as you travel in the passage. The passage curves to the south here, but there is a small barely noticeable passage to the north..  You hear a moaning sound in the distance. Although the walls open up more here, it's still not wide enough for complete comfort for most individuals. " );


  set_objects( 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/tinyweevil.c", 
 DIR+"/monsters/greenslime.c", 
 DIR+"/monsters/greenslime.c", 
 DIR+"/monsters/greenslime.c", 
 DIR+"/monsters/greenslime.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/weevil/x240y-260z-10.c",
  "south" : DIR+"/rooms/weevil/x240y-280z-10.c",
  "west" : DIR+"/rooms/weevil/x230y-270z-10.c"
  ]) );
}
