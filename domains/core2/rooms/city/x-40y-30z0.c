inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Mailroom" );
  set_long( "This room has long been abandoned, it is completely empty as nobody uses snail mail any more. Its floors are bare metal grating and the walls are the same dull metal as everything else." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y-20z0.c"
  ]) );
}
