inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This East Dome corridor allows at least three human adults to walk abreast. The blue stripes running along its entire make up to give the corridor a bluish hue.\n\nYou can walk along to the east or west." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x240y-30z0.c",
  "west" : DIR+"/rooms/east/x220y-30z0.c"
  ]) );
}
