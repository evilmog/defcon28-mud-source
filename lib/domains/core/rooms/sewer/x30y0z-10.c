inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Cockroach Breeding Pit" );
  set_long( "A sharp metallic tang assaults your sense of smell the moment you step into this room. It is a relatively small chamber, with the only source of light being a small light panel in the ceiling. Otherwise, all you see here are a lot of cockroaches of various sizes and variety. This must be a breeding pit for the insects, because you actually notice quite a few little eggs all around the room.\nnThe only exit available is the waterway canal to your northeast." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x40y10z-10.c"
  ]) );
}
