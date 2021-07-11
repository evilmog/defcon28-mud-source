inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 160);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Intersection" );
  set_long( "You stand in the middle of a three-way tube intersection. The circular passageway is joined to the other with some sort of hard alloy. As usual, the wires and tubes run crazily all over the corridor.\n\nThe tube corridors continue north and west. The maintenance operations room is located east." );

 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x160y440z-10.c",
  "east" : DIR+"/rooms/prisonbasement/x170y430z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x150y430z-10.c"
  ]) );
}
