inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Northeast Primary Hub" );
  set_long( "You stand on a wire-mesh platform, the one thing which separates you from the sewage flowing beneath. This is the interconnecting point of four main access tunnels, each of which branches off into different directions. This is a very large room, with the curving dome-like roof and the small light panels which brighten up the place. Still, the stench here is as bad as ever, what with all the accumulated waste just right beneath you. At least you're not wading in them. \n\nMain access tunnels can be reached by going northeast, northwest, southeast and southwest." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x50y50z-10.c",
  "northwest" : DIR+"/rooms/sewer/x30y50z-10.c",
  "southeast" : DIR+"/rooms/sewer/x50y30z-10.c",
  "southwest" : DIR+"/rooms/sewer/x30y30z-10.c"
  ]) );
}
