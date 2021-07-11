inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 9 - 10" );
  set_long( "This is one of the many armour shops, it specializes in armour from levels 9 to 10. Type list to get a list of armour." );


  set_objects( 
 DIR+"/monsters/abot_9_10.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y-60z0.c"
  ]) );
}
