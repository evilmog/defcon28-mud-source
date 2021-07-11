inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 15 - 16" );
  set_long( "What a nice shop, but only sortof, it looks like all the others only maybe this area has been cleaned a bit more. It has some muchness to it. Type list for a list of services from the autobot." );


  set_objects( 
 DIR+"/monsters/abot_15_16.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-70z0.c"
  ]) );
}
