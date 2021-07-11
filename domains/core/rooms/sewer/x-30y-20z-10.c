inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You are in a waterway canal, one of the sewers' sub-buffer irrigation system which allows a lot more water to be stored before flooding the City dome right above you. It's dark, narrow, cold and it stinks to high heaven.\n\nA service duct lies to your south. To your east and west are waterway canals." );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-30y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-20z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y-20z-10.c"
  ]) );
}
