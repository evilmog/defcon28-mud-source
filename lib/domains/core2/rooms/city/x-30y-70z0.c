inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 13 - 14" );
  set_long( "Wow this is a special armour shop, it even has decent armour or something. Type list for a list of stuff from the autobot." );


  set_objects( 
 DIR+"/monsters/abot_13_14.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y-70z0.c"
  ]) );
}
