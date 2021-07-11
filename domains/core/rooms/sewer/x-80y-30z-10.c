inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "ECC Corridor" );
  set_long( "Your footfalls echo across the cement floor of this corridor. The white walls and bright illumination by the light panels above you combine to give you a rather glaring perception of this place. There appears to be a low humming coming from your north. \n\nTo your south is another similar corridor. A geothermal converter is located to your north. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-80y-20z-10.c",
  "south" : DIR+"/rooms/sewer/x-80y-40z-10.c"
  ]) );
}
