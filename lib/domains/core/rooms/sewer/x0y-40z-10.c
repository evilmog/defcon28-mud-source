inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Moving sluggishly in the torpid current of the sewers, you try not to retch at the horrible stench which are bubbling out of the sewer waters all around you. To add to your nausea are the little lights by the sides of the tunnel which just seem to make the whole situation more surreal.\n\nThe main access tunnel continues to your east and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x10y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-10y-40z-10.c"
  ]) );
}
