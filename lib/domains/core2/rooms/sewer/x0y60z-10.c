inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "High ceilings seem to continue endlessly into the vertical darkness, while the main access tunnel's width itself is so wide that getting from one side to another is a feat of strength. Against the waist-deep sewage you muddle on, slimy sewage sticking to your body as you make your way through this huge tunnel. \n\nYou find that the main access tunnel continues to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x10y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-10y60z-10.c"
  ]) );
}
