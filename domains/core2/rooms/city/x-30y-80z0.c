inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour SHop: Level 17 - 18" );
  set_long( "Wow looks like they pulled out all the stops, but the same old tired autobot is here to sell you stuff. Type list for a list of services." );


  set_objects( 
 DIR+"/monsters/abot_17_18.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y-80z0.c"
  ]) );
}
