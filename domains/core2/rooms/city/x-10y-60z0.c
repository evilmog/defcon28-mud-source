inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 11 - 12" );
  set_long( "This is yet another armour shop, the walls are dull, the floors are dull, even the autobot is dull. Type list for a list of services." );


  set_objects( 
 DIR+"/monsters/abot_11_12.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-60z0.c"
  ]) );
}
