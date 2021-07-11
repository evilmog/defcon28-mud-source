inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "ECC Corridor" );
  set_long( "You are in one of the ECC corridors, sterile-looking white-walled passageways which don't seem to end anywhere. The bright lights from the ceiling above provide more than adequate lighting for you, a change from the dark sewers. \n\nTo the north is the geothermal converters' master control room. The corridor continues to the south." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y-20z-10.c",
  "south" : DIR+"/rooms/sewer/x-90y-40z-10.c"
  ]) );
}
