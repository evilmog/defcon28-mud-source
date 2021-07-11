inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 7 - 8" );
  set_long( "This is yet another armour shop, EvilMog is getting lazy and not doing real full descriptions, deal with it. Type list for servics etc." );


  set_objects( 
 DIR+"/monsters/abot_7_8.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y-50z0.c"
  ]) );
}
