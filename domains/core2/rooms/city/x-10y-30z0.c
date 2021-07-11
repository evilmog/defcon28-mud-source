inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Medical Shop" );
  set_long( "This looks like a dusty broom closet with some medical vending machines thrown in. The floors are dusty and the place looks like it hasn't been swept in a while.\n\nA %^MAGENTA%^list%^RESET%^ of products is on the wall." );


  set_objects( 
 DIR+"/monsters/autodoc.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-30z0.c"
  ]) );
}
