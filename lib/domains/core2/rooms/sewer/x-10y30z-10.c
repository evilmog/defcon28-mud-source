inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Chemical Purification" );
  set_long( "The clear sewer waters here are diverted into a large white tank which is hanging from the ceiling. The tunnels waterway is stopped here from continuing north by a metal dike which takes up half the tunnel. From the tank, you see that the water is then flushed into the tunnel to your north by a large hose. \n\nTo your north is a sluice. To your west is the water filtering part. of this water purification unit of the City sewers." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y40z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y30z-10.c"
  ]) );
}
