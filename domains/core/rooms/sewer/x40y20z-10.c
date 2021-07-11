inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Narrow walls, low ceiling and swift-moving knee-deep sewage waters make up this standalone irrigation sub-system of the City sewers. Its near-darkness cause you to feel a little claustrophobic as you grope around finding your way.\n\nThe waterway canal extends to your north and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y30z-10.c",
  "west" : DIR+"/rooms/sewer/x30y20z-10.c"
  ]) );
}
