inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour Shop: Level 5 - 6" );
  set_long( "This is yet another armour shop, I'm not going to describe the thing, you can even figure out that list will show you armor." );


  set_objects( 
 DIR+"/monsters/abot_5_6.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y-40z0.c"
  ]) );
}
