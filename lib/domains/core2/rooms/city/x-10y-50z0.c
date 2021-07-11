inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Mining Pass Office" );
  set_long( "This is a dull looking office, the walls are bare metal and the floor is a more scuffed up version of the same. An autobot is behind the desk.\n\nType '%^MAGENTA%^list%^RESET%^' to find out the prices of the passes." );


  set_objects( 
 DIR+"/monsters/autobot.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-50z0.c"
  ]) );
}
