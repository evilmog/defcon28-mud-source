inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 470);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Rod Control Room" );
  set_long( "A room filled with many consoles, the rod control room was designed to be a hundred percent automated. Here is where manipulator drones work to regulate the reactor's energy reactions within so that the power generated is constant. Every now and then, the drones will put or remove a rod or two from inside the reactor's innards so that the reactions will be stabilized. No human can work here. There are just too many controls in too little space.\n\nThe exit is to the south." );


  set_objects( 
 DIR+"/monsters/r1engineer.c", 
 DIR+"/monsters/r1mandrone.c", 
 DIR+"/monsters/r1mandrone.c", 
 DIR+"/monsters/r1mandrone.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/prisonbasement/x180y460z-10.c"
  ]) );
}
