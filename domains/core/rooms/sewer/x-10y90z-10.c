inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The near-darkness is a little alleviated by the small light panels by the sides of the tunnel, but that still doesn't help you when you're stumbling around blindly in the waist-high sewage. Every now and then, you bump into some hard object, or maybe even a decaying piece of organic matter. The amount of waste matter here is amazing.\n\nExits are to the east and west." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x0y90z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y90z-10.c"
  ]) );
}
