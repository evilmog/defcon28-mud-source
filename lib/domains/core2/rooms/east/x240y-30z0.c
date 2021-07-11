inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This East Dome corridor allows at least three human adults to walk abreast. The blue stripes running along its entire make up to give the corridor a bluish hue.\n\nSouth leads to the living stats department. Corridors continue to your east and west." );


  set_objects( 
 DIR+"/monsters/droid.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x240y-40z0.c",
  "east" : DIR+"/rooms/east/x250y-30z0.c",
  "west" : DIR+"/rooms/east/x230y-30z0.c"
  ]) );
}
