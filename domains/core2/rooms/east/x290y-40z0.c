inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 290);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Droid Outfitting Bay" );
  set_long( "Oil patches are all over the floor. This droid bay is composed entirely of metal, as the equipment needed for outfitting the droids here are connected directly to the walls, the ceiling and the floor. You pick your way carefully around here, cautiously avoiding the pieces of metal and the pools of oil on the floor.\n\nThe droid spare parts room is located to your east. To the south is the droid docking bay, while a corridor branches off to the west. " );


  set_objects( 
 DIR+"/monsters/outfitterrobot.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x290y-50z0.c",
  "east" : DIR+"/rooms/east/x300y-40z0.c",
  "west" : DIR+"/rooms/east/x280y-40z0.c"
  ]) );
}
