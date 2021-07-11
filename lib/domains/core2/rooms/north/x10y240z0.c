inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Steel walls border you along this corridor. The lack of air-conditioning cause you to sweat, a condition aggravated by the uncommonly bright lighting of this passageway. Steel metal plates which form the floor cause your feet to echo heavily across the corridor.\n\nThe corridor continues north. To your south is the North Dome Housing Services office." );


  set_objects( 
 DIR+"/monsters/repairdroid.c", 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x10y250z0.c",
  "south" : DIR+"/rooms/north/x10y230z0.c"
  ]) );
}
