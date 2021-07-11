inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 480);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Collant Stoage Area" );
  set_long( "You have entered REACTOR ONE's coolant storage area, the place where cylinders storing coolant fluids to keep the reactor's temperature in check are kept. Two dozen cylinders or so are on the floor, stacked neatly together. Pipes which line the ceiling of the room are fixed to some of these cylinders.\n\nMore coolant storage areas can be accessed east. A corridor leading out is to the south." );


  set_objects( 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/raddgoo.c", 
 DIR+"/monsters/radgoo.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x190y470z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x200y480z-10.c"
  ]) );
}
