inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Southwest Primary Hub" );
  set_long( "Standing on a wire-mesh platform which raises you relatively higher than the sewer waters, you observe the sewage below flowing steadily into a main access tunnel southwest of you. It appears that that particular main access tunnel is sloping downwards slightly, but you feel that there is something else pulling the current towards it. The domed roof of this hub is huge, with light panels providing adequate lighting for you. \n\nThe main access tunnels branch off to the east, northwest, southeast and southwest. " );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-40y-40z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-60y-30z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-40y-50z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-60y-50z-10.c"
  ]) );
}
