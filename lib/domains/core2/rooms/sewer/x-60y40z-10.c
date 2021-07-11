inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The main access tunnel seems to stretch to infinity in the darkness of the sewers. Apart from the tiny light panels by the sides of the tunnel, you don't have anything else for illumination. What's more, sewer waters are dark, murky and filled with all sorts of trash and unknown things. You don't seem to be in a very favourable position.\n\nYou may continue to your north or south along the main access tunnel." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y50z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y30z-10.c"
  ]) );
}
