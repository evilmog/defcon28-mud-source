inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 160);
  set_property("y", 450);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Rod Control Room" );
  set_long( "Fully-automated, the rod control room is run by manipulator drones. Here is where the drones control the intensity of the reaction within the reactor by placing or removing rods inside the reactor. The presence of the rods will reduce the reaction rate, so the reactor can be downpowered if it is generating too much energy inside. This is not a place humans can work in. Apart from being too cramped, there are also too many controls to handle.\n\nThe exit is to your east." );


  set_objects( 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1mandrone.c", 
 DIR+"/monsters/r1mandrone.c", 
 DIR+"/monsters/r1mandrone.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x170y450z-10.c"
  ]) );
}
