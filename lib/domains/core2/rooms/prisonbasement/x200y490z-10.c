inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 490);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Very Infested Coolant Storage Area" );
  set_long( "Oh no! It seems something disgusting has thoroughly taken over this coolant storage area! The cylinders which used to contain the coolant fluids have been broken, spilling the fluids all over the room. The pipes have been wrenched from their joints. Something must have gone about this spree of wilful destruction. The whole room appears to be infested with some sort of gooey stuff!\n\nThe only visible exit is located to the south of the room." );


  set_objects( 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/cyberslime.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x200y480z-10.c"
  ]) );
}
