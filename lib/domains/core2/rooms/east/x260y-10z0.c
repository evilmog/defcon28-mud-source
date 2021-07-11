inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Unit Listings" );
  set_long( "Soft green light permeates this room from the ceiling, dimly illuminating the unit listings room. This is the place where you can check out the names and rooms of every inhabitant of the East housing dome. It is a big room, with vaunted arches vanishing into the darkness of the ceiling above.\n\nThe exit is located to the west." );

 set_exits( ([
  "west" : DIR+"/rooms/east/x250y-10z0.c"
  ]) );
}
