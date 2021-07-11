inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Sewage seems more sluggish in this part of the main access tunnel, while the stench of the sewers seems to be stronger. Your attempts to wade through the thick waters are fraught with obstacles like a slimy tunnel floor, waist-level waters and a lack of good and proper lighting. \n\nThe main access tunnel you are in extends to the northeast and southwest." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x40y40z-10.c",
  "southwest" : DIR+"/rooms/sewer/x20y20z-10.c"
  ]) );
}
