inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "A clearing" );
  set_long( "Overhead, bright solar-panels illuminate the clearing you are in with artificial solar energy. Apart from a few patches of grass, there doesn't seem to be any other plants around. The steel walls of the atrium are warm to the touch, an effect of the solar-panels. \n\nCement walkways disappear into increasing foliage to your north and east. There seems to be a pool of water to your northwest." );


  set_objects( 
 DIR+"/monsters/python.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x170y-20z0.c",
  "east" : DIR+"/rooms/east/x180y-30z0.c",
  "northwest" : DIR+"/rooms/east/x160y-20z0.c"
  ]) );
}
