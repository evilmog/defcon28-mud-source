inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Inflow area" );
  set_long( "Among the heavy foliage here are pairs of iron pipes with metal gratings on them fixed to the eastern wall. The air around you is being sucked into the pipes, which hum constantly with the effort. A bunch of loose leaves are collected untidily beneath the pipes, blocked by the gratings from entering the pipes.\n\nThe atrium walkway exits to the northwest." );


  set_objects( 
 DIR+"/monsters/mamba.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/east/x180y-40z0.c"
  ]) );
}
