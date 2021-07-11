inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "A strong stale aroma seems to be coming from the north of this duct. Try as you might, you cannot see far into that direction even with the good lighting provided here.\n\nThe service duct continues to the south. A dimly-lit room lies to the north." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x90y40z-10.c",
  "south" : DIR+"/rooms/sewer/x90y20z-10.c"
  ]) );
}
