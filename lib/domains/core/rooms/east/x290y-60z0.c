inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 290);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Droid Docking Bay" );
  set_long( "You're in one of the droid docking bays of the East dome. The larger part of the room is filled with docks for storing the droids. The lightning here is very dim, and you are forced to watch your footing as you walk around here. \n\n  To the north is another docking bay. The droid maintenance bay is located to your west. " );


  set_objects( 
 DIR+"/monsters/eastmaintenancedroid.c", 
 DIR+"/monsters/eastmaintenancedroid.c", 
 DIR+"/monsters/eastmaintenancedroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x290y-50z0.c",
  "west" : DIR+"/rooms/east/x280y-60z0.c"
  ]) );
}
