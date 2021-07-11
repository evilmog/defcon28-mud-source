inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 480);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Coolant Storage Area" );
  set_long( "You are in a moderately cool room. All around you on the floor are cylinders which are stacked neatly on the floor. You notice pipes which are joined to these cylinders lining the ceiling above you. The floor itself is made of hard cold cement. You can almost feel its solid hardness beneath your feet.\n\nMore coolant storage areas are located to the north, south and west." );


  set_objects( 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/raddyzoon.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c", 
 DIR+"/monsters/radgoo.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x200y490z-10.c",
  "south" : DIR+"/rooms/prisonbasement/x200y470z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x190y480z-10.c"
  ]) );
}
